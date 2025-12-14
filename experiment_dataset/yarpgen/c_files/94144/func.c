/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94144
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (((((/* implicit */_Bool) 406108586)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)25)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)512)))))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_20 ^= ((/* implicit */unsigned int) -1598656019);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3] = ((/* implicit */signed char) 7580955968503522959ULL);
                        var_21 = ((/* implicit */unsigned short) (_Bool)1);
                        var_22 = ((/* implicit */short) min((((unsigned long long int) min((7174312037386475946LL), (((/* implicit */long long int) var_5))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), ((-(309660664U))))))));
                    }
                    var_23 &= ((/* implicit */int) (unsigned char)240);
                    var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)527)) <= (-406108570)))) | (((/* implicit */int) ((((/* implicit */int) (short)490)) == (((/* implicit */int) (unsigned char)252)))))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (signed char)115))))));
                }
            }
        } 
    } 
    var_25 |= ((/* implicit */short) var_15);
}
