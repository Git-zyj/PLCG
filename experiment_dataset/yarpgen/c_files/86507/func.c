/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86507
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
    var_18 = var_14;
    var_19 *= ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
    var_20 = var_1;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_2] [i_0]))));
                    arr_10 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(3853870199U)))) | (-1LL)));
                    var_22 &= ((/* implicit */short) ((unsigned int) 3571470662881781680LL));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_8))))) * (var_15)))) ? (((/* implicit */int) ((short) max((((/* implicit */unsigned int) arr_12 [i_3])), (var_5))))) : (((/* implicit */int) ((_Bool) var_13)))));
        arr_13 [0ULL] &= ((/* implicit */long long int) arr_11 [(_Bool)1] [i_3]);
        var_24 &= var_5;
        arr_14 [i_3] = ((/* implicit */unsigned int) arr_12 [(short)0]);
        var_25 = ((/* implicit */_Bool) var_10);
    }
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    {
                        arr_27 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned int) var_1);
                        var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((-1LL) <= (((/* implicit */long long int) var_12)))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned int) arr_16 [i_4]);
        var_28 = ((/* implicit */int) ((var_15) * (((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_4])))))));
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) max((min((((/* implicit */unsigned int) (!(var_9)))), ((+(var_7))))), (((/* implicit */unsigned int) var_8)))))));
    }
}
