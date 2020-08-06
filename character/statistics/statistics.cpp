#include "statistics.h"

namespace DawnStorm {
    int Statistics::Get_Stat(DawnStorm::Statistic stat) const {
        switch (stat) {
            case Statistic::Body:
                return body - bodySpent - bodyScar;
            case Statistic::Soul:
                return soul - soulSpent - soulScar;
            case Statistic::Influence:
                return influence - influenceSpent - influenceScar;
        }
        return -1;
    }

    int Statistics::Get_StatMax(DawnStorm::Statistic stat) const {
        switch (stat) {
            case Statistic::Body:
                return body;
            case Statistic::Soul:
                return soul;
            case Statistic::Influence:
                return influence;
        }
        return -1;
    }
}
