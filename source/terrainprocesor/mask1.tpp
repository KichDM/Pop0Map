<?xml version="1.0" encoding="UTF-8"?>
<Project>
    <Version>79</Version>
    <Name>mask1</Name>
    <ExportSettings>
        <Directory></Directory>
        <ExportLBT>1</ExportLBT>
        <ExportSHP>0</ExportSHP>
    </ExportSettings>
    <Tasks>
        <Task>
            <Shapefile>P:\Equal_Islands\source\shapefiles\area.shp</Shapefile>
            <TaskName>Area: High-density Cluster</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Notes</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="75"/>
                <Parameter Name="Fraction" Type="0" Value="1"/>
                <Parameter Name="Blend distance" Type="0" Value="5"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_Ficus_medium_F"/>
                    <Parameter Name="PROB" Value="40"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="10"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_Ficus_small_F"/>
                    <Parameter Name="PROB" Value="30"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="140"/>
                    <Parameter Name="MINDIST" Value="10"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_ficusb2s_f"/>
                    <Parameter Name="PROB" Value="30"/>
                    <Parameter Name="MINHEIGHT" Value="120"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="10"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_Inocarpus_F"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="15"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\Equal_Islands\data\roads\roads.shp</Shapefile>
            <TaskName>Mask: Linear</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Notes</Notes>
            <Parameters>
                <Parameter Name="Objects distance" Type="0" Value="15"/>
                <Parameter Name="Spline interpolation" Type="0" Value="0"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>tree_mask.shp</Shapefile>
            <TaskName>Mask: Area</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Notes</Notes>
            <Parameters>
                <Parameter Name="Remove objects" Type="0" Value="Inside"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
    </Tasks>
</Project>
