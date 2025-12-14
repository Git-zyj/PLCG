/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62409
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
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_10 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (4080U)));
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                    arr_6 [(signed char)16] = ((/* implicit */unsigned short) var_8);
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (_Bool)1))));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 15; i_3 += 3) /* same iter space */
                {
                    var_13 = ((unsigned int) (signed char)-103);
                    var_14 |= ((/* implicit */int) var_4);
                }
                for (short i_4 = 1; i_4 < 15; i_4 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        arr_15 [i_0 - 1] [i_0] [i_1] [(_Bool)1] [i_5] = ((/* implicit */short) (_Bool)1);
                        var_15 = ((/* implicit */unsigned char) (+(max(((+(((/* implicit */int) arr_0 [i_4])))), (((/* implicit */int) ((signed char) var_3)))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_6 = 3; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        var_16 += ((/* implicit */signed char) arr_18 [7] [7] [i_4] [7] [7]);
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+(var_6))))));
                        var_18 = ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (signed char)-1)));
                        var_19 &= ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4 + 2])) ? (var_6) : (((/* implicit */int) var_3)));
                    }
                    for (short i_7 = 3; i_7 < 16; i_7 += 2) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        arr_22 [i_0] [i_0] [i_7] = ((/* implicit */_Bool) var_6);
                    }
                    var_21 = ((/* implicit */long long int) ((unsigned char) (unsigned short)19));
                }
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((unsigned int) (-(((/* implicit */int) (unsigned short)14274))))))));
            }
        } 
    } 
    var_23 *= ((/* implicit */_Bool) (unsigned char)107);
}
