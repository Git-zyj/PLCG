/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78741
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (max((4ULL), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)1)))))));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((_Bool) var_12);
        var_17 &= ((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (1203098426) : (((/* implicit */int) var_1))))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? ((-(1203098414))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */unsigned int) max((-1203098415), (((/* implicit */int) (_Bool)1))))) : (arr_4 [i_1])))) : (((((/* implicit */_Bool) (+(964322189787873370LL)))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (2368374866789430901ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))))) : (((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)156)))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? ((((((~(((/* implicit */int) var_1)))) + (2147483647))) << (((((((((/* implicit */_Bool) (unsigned char)136)) ? (-1203098427) : (((/* implicit */int) (unsigned char)227)))) + (1203098456))) - (29))))) : (((((/* implicit */_Bool) ((7138722337492687313LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)10)))))) ? (((/* implicit */int) arr_5 [11U])) : ((-(((/* implicit */int) arr_5 [i_1]))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((((/* implicit */long long int) (unsigned char)233)), (-7138722337492687301LL))), (((/* implicit */long long int) var_11)))))));
                arr_14 [i_3] [1ULL] [i_3] = ((/* implicit */unsigned int) -3387181742264890704LL);
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)34))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1203098395)) ? (-1203098427) : (((/* implicit */int) (unsigned char)252))))) : (0ULL))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_5))))), (((unsigned int) -4157750462892773217LL)))))))));
    var_22 += ((/* implicit */unsigned char) 3504271310U);
}
