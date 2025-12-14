/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73619
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
    var_20 = ((/* implicit */int) var_16);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            arr_4 [i_1] [i_1] [i_0] = ((1114301146) >> (((((/* implicit */int) (signed char)127)) - (105))));
            var_21 = ((/* implicit */signed char) min((arr_0 [i_0] [i_1]), (((/* implicit */long long int) min((-470548169), (min((((/* implicit */int) var_6)), (470548168))))))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned char) arr_3 [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_1 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))) ? (max((arr_0 [i_1 - 1] [i_1 - 1]), (((/* implicit */long long int) (!(var_1)))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        }
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            var_23 = ((/* implicit */int) var_16);
            var_24 += min((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_16)) : (arr_5 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (arr_5 [i_0] [i_0]))) : (((((/* implicit */int) arr_1 [i_0])) * (arr_7 [i_0] [i_0] [i_0])))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_15)), ((unsigned char)255))))) : (min((((/* implicit */long long int) var_18)), (arr_0 [i_0] [i_0]))))));
            arr_8 [i_0] = ((_Bool) arr_7 [i_0] [i_0] [i_2]);
            var_25 = ((((/* implicit */int) ((signed char) (+(470548168))))) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((var_10) | (var_10))) : (min((((/* implicit */int) arr_2 [i_0])), (var_9))))));
        }
        for (signed char i_3 = 2; i_3 < 17; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    {
                        arr_17 [i_0] [i_3] [i_4] [i_0] = ((/* implicit */_Bool) 470548153);
                        arr_18 [i_0] = ((/* implicit */short) arr_15 [i_0] [i_3] [i_3] [i_3] [i_5]);
                        var_26 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3 - 1]))))));
                        var_27 = ((/* implicit */unsigned char) arr_2 [i_3 - 2]);
                    }
                } 
            } 
            arr_19 [i_0] [i_3] [i_0] = ((/* implicit */short) arr_10 [i_3]);
        }
        for (unsigned short i_6 = 4; i_6 < 17; i_6 += 1) 
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_22 [i_6] [i_0]))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_5)))) : (((/* implicit */int) var_7))));
            var_29 = ((/* implicit */long long int) ((int) min((max((var_18), (((/* implicit */unsigned char) arr_13 [i_0] [i_0])))), (((/* implicit */unsigned char) arr_6 [i_0])))));
            var_30 = ((/* implicit */signed char) ((667576894) <= (max((min((((/* implicit */int) var_1)), (arr_7 [i_0] [i_0] [i_0]))), (((/* implicit */int) min(((signed char)121), (((/* implicit */signed char) arr_13 [i_0] [i_6])))))))));
        }
        var_31 = ((/* implicit */unsigned char) (_Bool)1);
        var_32 = ((/* implicit */unsigned char) ((int) (!(arr_13 [i_0] [i_0]))));
    }
    for (short i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                {
                    arr_31 [i_7] [i_8] [i_9] = ((/* implicit */long long int) (_Bool)1);
                    var_33 = ((/* implicit */short) (signed char)113);
                    var_34 = arr_13 [i_7] [i_8];
                    arr_32 [i_9] [i_7] [i_7] [i_7] = ((/* implicit */int) ((_Bool) (unsigned char)255));
                    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */int) (unsigned char)13)) >> (((((/* implicit */int) (unsigned char)243)) - (227))))) : (min((((/* implicit */int) arr_1 [i_7])), (0)))))) ? (774096974) : (arr_24 [i_7] [i_8]))))));
                }
            } 
        } 
        arr_33 [i_7] = ((/* implicit */short) (unsigned char)77);
        arr_34 [i_7] = ((/* implicit */unsigned char) arr_2 [i_7]);
        arr_35 [i_7] [i_7] = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)-1)), (-470548172)));
        var_36 -= ((/* implicit */unsigned char) arr_23 [i_7]);
    }
    var_37 = (+(var_17));
}
