/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91502
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
    var_20 = ((/* implicit */unsigned short) var_8);
    var_21 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_22 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) var_16)))))))));
        var_23 &= ((_Bool) var_13);
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && ((_Bool)1)))), (var_3))) - (((/* implicit */int) var_1)))))));
        var_25 = ((arr_1 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))));
    }
    for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    {
                        arr_13 [i_1 - 1] [(unsigned short)10] [(short)17] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1 - 3] [i_2] [i_3] [i_4])) << (((((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [(unsigned short)11])) - (15994)))));
                        var_26 = ((/* implicit */int) var_18);
                        var_27 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_6 [i_1 - 3] [i_1 - 1] [i_1 - 3])))) - (((/* implicit */int) arr_10 [i_1] [(signed char)12] [i_3] [i_4]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            var_28 = ((/* implicit */int) var_12);
            var_29 = ((/* implicit */unsigned long long int) var_3);
        }
        var_30 = ((/* implicit */unsigned long long int) (+((((-(((/* implicit */int) (signed char)4)))) + (((/* implicit */int) arr_5 [i_1] [11]))))));
        var_31 -= ((/* implicit */short) (-(((/* implicit */int) var_2))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 3; i_6 < 19; i_6 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 4; i_7 < 20; i_7 += 2) 
        {
            for (unsigned char i_8 = 1; i_8 < 18; i_8 += 2) 
            {
                {
                    var_32 *= ((/* implicit */short) (signed char)118);
                    var_33 += ((((var_16) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_14))) << (((/* implicit */int) var_7)));
                    var_34 += ((/* implicit */unsigned short) (signed char)105);
                }
            } 
        } 
        var_35 = ((/* implicit */short) ((15968570150800288505ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    }
}
