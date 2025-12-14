/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88011
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_2))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_18 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1] [i_1 - 1])) ? (((((/* implicit */_Bool) -813716313)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_9)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1476715969)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) (unsigned short)65535)))))));
                        var_20 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)0)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_7 [i_2])) : (-1113583686))) : (((((/* implicit */_Bool) var_7)) ? (-891696558) : (((/* implicit */int) var_6))))))) ? (1996892666) : (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_10)) < (((/* implicit */int) (unsigned short)8191))))), (arr_5 [i_0] [i_0] [i_0])))));
                        var_21 = ((/* implicit */unsigned short) var_14);
                    }
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [i_4] [i_4] [i_2 - 1] [i_2]))));
                        var_23 = ((/* implicit */int) min((var_23), (((((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 2])) ? (891696557) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1 + 1])))) << (((((/* implicit */int) var_13)) - (40)))))));
                        var_24 += ((/* implicit */unsigned char) (unsigned short)24);
                    }
                }
            } 
        } 
    } 
}
