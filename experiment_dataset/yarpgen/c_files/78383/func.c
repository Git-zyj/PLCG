/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78383
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3)))) < ((((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) (signed char)-109)) ? (6487773772678729733LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))))) : (((/* implicit */long long int) ((/* implicit */int) (short)26698))))))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_0 - 2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((+(var_10))) : (((/* implicit */int) (short)-26698))));
            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) 530251129100319053ULL)) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 2]))))))));
            var_13 = ((/* implicit */int) arr_3 [i_0]);
            var_14 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29))) : (min((((/* implicit */unsigned int) var_1)), (arr_0 [i_0] [i_0 + 3]))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) (short)25498))))), (max((arr_6 [i_2] [i_2]), (((/* implicit */long long int) (short)26698)))))))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) ((short) 897839556))), (min((var_8), (((/* implicit */unsigned long long int) (short)32640))))))));
        }
        var_16 *= ((/* implicit */unsigned char) ((min(((!(((/* implicit */_Bool) (short)26695)))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)26718))) >= (2097148U))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) 31LL)))))) : (((unsigned long long int) (+(38LL))))));
        var_17 = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned int) arr_4 [i_0] [i_0 + 4] [i_0])), (arr_0 [i_0 + 3] [i_0]))));
        var_18 = ((/* implicit */_Bool) arr_6 [i_0 + 3] [i_0 + 1]);
    }
    var_19 = ((/* implicit */int) ((min((((/* implicit */long long int) var_4)), (8510546869861635595LL))) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_20 = ((/* implicit */unsigned int) min((var_1), (((((/* implicit */int) (unsigned short)4349)) << (((var_10) + (350335613)))))));
    var_21 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26682)) ? (var_7) : (var_1)))) ? (((12958273375623983714ULL) / (25ULL))) : (((/* implicit */unsigned long long int) var_2))))));
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)61187)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)61197)))))))));
}
