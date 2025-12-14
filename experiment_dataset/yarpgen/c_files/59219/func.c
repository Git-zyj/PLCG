/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59219
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_16 -= ((/* implicit */unsigned int) (+((+((~(-919172190)))))));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(5196752419969230304ULL))))))))))));
                        var_18 = ((/* implicit */int) min((var_18), ((~((~((~(((/* implicit */int) var_4))))))))));
                        var_19 |= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)9)))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (+((~((-(var_0))))))))));
                                arr_16 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_5] = (!((!(((/* implicit */_Bool) (+(-850578062)))))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7))))))))))));
                                var_22 -= (+((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32589))))))));
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~((~(9477897805149158974ULL)))));
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) arr_1 [i_0])))))))));
                }
            } 
        } 
    } 
    var_24 &= (-((-((-(var_9))))));
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 4) 
    {
        for (long long int i_7 = 1; i_7 < 22; i_7 += 4) 
        {
            {
                var_25 -= ((/* implicit */_Bool) (+((+((-(((/* implicit */int) (short)32587))))))));
                var_26 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
