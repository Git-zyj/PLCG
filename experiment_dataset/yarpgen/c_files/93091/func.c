/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93091
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)26277)) ? (min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56205))) : (16013066667581925745ULL))), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) (unsigned short)56205))))))) : (7427954429193263622ULL)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 *= var_10;
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((unsigned char) arr_2 [i_1 - 1])), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))))))))));
                        var_20 = max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_16))) + (var_0))))));
                    }
                    for (int i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
                    {
                        var_21 = ((((/* implicit */_Bool) (-(arr_5 [i_1 - 1] [i_4] [i_4] [i_4])))) || (((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_2])), ((unsigned short)56205)))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_4]))))))));
                        var_22 += ((/* implicit */unsigned short) min((((/* implicit */signed char) ((_Bool) var_10))), (((signed char) var_10))));
                        var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2251799813684736ULL)) ? (((/* implicit */int) (unsigned short)58300)) : (((/* implicit */int) (unsigned short)9330))));
                    }
                    for (int i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                    {
                        var_24 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 11018789644516287994ULL))))) < (((/* implicit */int) ((signed char) arr_14 [i_0] [i_0] [i_0] [i_0]))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) (short)32704))))) ? (11018789644516287994ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_5] [i_6])))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_1]))))) ? (((/* implicit */long long int) -1061127567)) : (min((var_15), (((/* implicit */long long int) var_1)))))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((long long int) (+(((/* implicit */int) var_5)))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) (short)32705);
    var_27 = ((/* implicit */long long int) var_10);
    var_28 = ((/* implicit */short) var_1);
}
