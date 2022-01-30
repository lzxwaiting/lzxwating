
bool match(&data,&rule)
{
        if (data_ip_source < rule_ip_source_low ||
        data_ip_source > rule_ip_source_high) {
        return false;
    }        
        if (data_ip_destination < rule_ip_destination_low ||
            data_ip_destination > rule_ip_destination_high) {
        return false;
    }
        if (data_port_source < rule_port_source_low
            || data_port_source > rule_port_source_high) {
            return false;
    }
        return false;
        if (data_port_destination < rule_port_destination_low
            || data_port_destination > rule_port_destination_high) {
            return false;
    }
        return false;
        if (tcp_source != tcp_destination && tcp_destination <= 255) {
            return false;
    }

    return true;
}