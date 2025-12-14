/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69136
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))) : (2139336890U))))));
                var_21 = ((/* implicit */unsigned char) var_3);
                var_22 ^= ((/* implicit */unsigned short) (unsigned char)57);
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)39540)) * (((/* implicit */int) (unsigned char)110)))))))))))));
                    var_24 = arr_4 [(unsigned short)8];
                }
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 3477496655U)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)101)))) << (((((/* implicit */int) (unsigned char)81)) - (69))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_8 [i_4] [i_0] [i_3]))))));
                    }
                    var_26 ^= arr_5 [i_3] [(unsigned short)9];
                }
                for (unsigned short i_5 = 2; i_5 < 11; i_5 += 4) 
                {
                    var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_8 [i_0] [i_0] [i_5 - 2]), (((/* implicit */unsigned short) (unsigned char)175)))))));
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_5 [i_5 + 1] [i_0 - 1])))), (((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_5])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_11)))))))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 9; i_8 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)24081))));
                                arr_25 [i_0] [i_1] [(unsigned char)1] [i_0] [(unsigned char)4] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_2 [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)192)))))));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_5)))))) / (var_3)));
    /* LoopSeq 1 */
    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
    {
        var_32 = ((/* implicit */unsigned short) min((var_32), (var_13)));
        var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)24))));
    }
}
