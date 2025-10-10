    cout << "¿Qué legajo desea buscar?" << endl;
    cin >> m;

    int pos = busquedaPorLegajo(alumnos, 5, m);

    if (pos != -1)
    {
        cout << "El alumno con legajo " << m << " es: "
             << alumnos[pos].nombre << " " << alumnos[pos].apellido << endl;
        cout << "Año de inscripción: " << alumnos[pos].legajo.anioInscripcion << endl;
    }
    else
    {
        cout << "No se encontró ningún alumno con ese legajo." << endl;
    }