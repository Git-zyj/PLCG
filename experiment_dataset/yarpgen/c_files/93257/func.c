/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93257
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-531570574)))) ? (((((/* implicit */int) (unsigned char)0)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) : ((-(((var_7) / (var_7)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) var_13))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)0)), (arr_0 [i_0])))) ? (((unsigned long long int) 1239300694)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 ^= ((/* implicit */unsigned int) ((((long long int) 1054988721)) <= (((/* implicit */long long int) (+(arr_3 [i_0] [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((_Bool) (signed char)-127))), (max((2147482624U), (((/* implicit */unsigned int) max(((signed char)73), ((signed char)-72))))))));
                        arr_12 [i_3] [i_3] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) 2147482624U)), (14626821470101025898ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0])), (var_4)))))), (((/* implicit */unsigned long long int) var_11))));
                        arr_13 [i_2] [i_2] [i_3] = (_Bool)1;
                    }
                } 
            } 
            var_17 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1])), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)66))))) ? (arr_6 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
            var_18 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_6 [i_0] [i_0] [i_0]))), ((((_Bool)1) ? (16324250186331301019ULL) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (-8115221850429390305LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
        }
        arr_14 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16324250186331301022ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) 1118122088))));
        var_19 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) ((long long int) -8251168079989307252LL))) ? (((((/* implicit */_Bool) 2147484671U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)143)))) : (((/* implicit */int) ((unsigned char) 14557310601666527641ULL)))))));
    }
}
