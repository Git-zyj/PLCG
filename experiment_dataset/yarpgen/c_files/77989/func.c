/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77989
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
    var_15 = ((/* implicit */short) 2135606373U);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                    var_17 = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))), ((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_1 - 3] [i_2]))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) 1441542185711292225LL)) || (((/* implicit */_Bool) (short)32735))))), (var_14))))));
        var_19 &= ((/* implicit */signed char) 2192474838827585265LL);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 7; i_6 += 1) 
                    {
                        for (int i_7 = 2; i_7 < 9; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)8191));
                                var_21 = min((min((3121722045U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-64))))))), (((/* implicit */unsigned int) ((unsigned char) max((5735326253756777958LL), (((/* implicit */long long int) (unsigned short)50125)))))));
                                var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)57342)) ? (((/* implicit */int) (unsigned short)57344)) : (((/* implicit */int) (unsigned short)31))))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)25982)), (3587115956U)))) ? (((/* implicit */int) (signed char)40)) : ((~(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) 12877919835320995479ULL);
                }
            } 
        } 
    } 
}
