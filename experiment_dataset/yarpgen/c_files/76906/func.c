/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76906
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)25860))))) ? ((((_Bool)1) ? (3080319457447077708ULL) : (15366424616262473907ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3080319457447077708ULL)))))))) & (((((_Bool) (unsigned short)16383)) ? (((3080319457447077683ULL) + (15366424616262473907ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    var_19 |= ((/* implicit */_Bool) var_3);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((6488869021351238317ULL), (1145150665447336915ULL))))));
        var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((15366424616262473907ULL) <= (12201093952636365596ULL))))));
        var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65525)))), (17301593408262214696ULL)));
    }
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            var_22 &= ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (17301593408262214687ULL))))) ? (min((1145150665447336928ULL), (3080319457447077696ULL))) : ((-(17301593408262214678ULL))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (15366424616262473899ULL))), (((/* implicit */unsigned long long int) (unsigned short)2047))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(3080319457447077710ULL)))))) : (((((/* implicit */_Bool) 1145150665447336919ULL)) ? (0ULL) : (9928190025852462855ULL)))));
                arr_9 [i_2 + 1] &= ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)64512));
            }
        }
        arr_10 [i_1 - 1] = (~(max((10841723975360782088ULL), (((/* implicit */unsigned long long int) (unsigned short)38743)))));
    }
}
