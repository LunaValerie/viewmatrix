Device->GetViewport(&viewport);
D3DXMATRIX projection, view, world;
D3DXVECTOR3 vScreenCoord(0, 0, (float)aimheight), vWorldLocation(0, 0, 0);

Device->GetTransform(D3DTS_VIEW, &view);
Device->GetTransform(D3DTS_PROJECTION, &projection);
Device->GetTransform(D3DTS_WORLD, &world);

D3DXVec3Project(&vScreenCoord, &vWorldLocation, &viewport, &projection, &view, &world);

if (vScreenCoord.z < 1)
{
pModel->Position2D.x = vScreenCoord.x;
pModel->Position2D.y = vScreenCoord.y;
}