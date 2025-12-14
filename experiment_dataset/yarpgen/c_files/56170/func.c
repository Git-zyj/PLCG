/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56170
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
    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) var_15)))));
    var_19 -= ((/* implicit */long long int) ((_Bool) (~((-(((/* implicit */int) var_16)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) var_10);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    var_20 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) ((short) var_14))))));
                    var_21 = ((/* implicit */signed char) ((long long int) ((signed char) (+(var_13)))));
                    var_22 = ((/* implicit */_Bool) var_2);
                    arr_13 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                {
                    var_23 = ((/* implicit */signed char) (~(((unsigned int) ((signed char) var_12)))));
                    var_24 += ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))));
                    var_25 = ((/* implicit */unsigned long long int) ((signed char) var_7));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */_Bool) var_5);
                        var_27 = ((/* implicit */signed char) ((int) ((_Bool) var_11)));
                        var_28 = ((/* implicit */long long int) var_10);
                    }
                }
            } 
        } 
        arr_23 [11LL] = ((/* implicit */unsigned short) var_2);
    }
    var_29 &= ((unsigned long long int) ((unsigned long long int) (+(((/* implicit */int) var_10)))));
}
