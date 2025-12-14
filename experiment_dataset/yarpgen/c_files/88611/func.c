/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88611
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (unsigned char)107)))) : (((/* implicit */int) var_16))))) ? (min(((+(((/* implicit */int) (unsigned char)189)))), (((/* implicit */int) (unsigned char)148)))) : (((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (unsigned char)202;
                /* LoopSeq 3 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    arr_9 [i_0] = var_6;
                    arr_10 [i_0] [i_1] [i_2 + 2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (unsigned char)255))))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)253)))))));
                    var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)3)))) ? (((((/* implicit */_Bool) ((unsigned char) arr_7 [i_2]))) ? (((((/* implicit */int) arr_2 [i_0] [i_2 + 1])) & (((/* implicit */int) (unsigned char)144)))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) var_13))))))) : (((/* implicit */int) (unsigned char)207))));
                }
                for (unsigned char i_3 = 2; i_3 < 14; i_3 += 3) 
                {
                    var_21 = (unsigned char)107;
                    arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_13 [i_3 + 1] [i_3] [i_3 - 2] [i_3 - 2]))) ? (((/* implicit */int) min((arr_4 [i_3 - 2] [i_1] [i_3 - 1]), (var_11)))) : (((/* implicit */int) min(((unsigned char)207), (arr_4 [i_3 - 2] [i_1] [(unsigned char)10]))))));
                }
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) max(((unsigned char)113), (arr_5 [i_4])))) : (((/* implicit */int) max(((unsigned char)189), ((unsigned char)183)))))) : (((/* implicit */int) min((arr_8 [i_0] [i_1]), (arr_8 [i_1] [i_4]))))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (arr_8 [i_4] [i_1])));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max((var_24), (((unsigned char) (unsigned char)32))));
}
