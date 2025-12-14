/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72375
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
    var_13 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_14 -= ((/* implicit */unsigned long long int) ((128844628U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_3 + 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) * (((unsigned long long int) var_10))));
                        arr_13 [i_1] [i_1] [9LL] [i_1] = ((/* implicit */int) var_0);
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((var_2), (var_2))))), (((/* implicit */unsigned long long int) var_3)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_0))));
        var_17 = ((/* implicit */long long int) ((min((arr_15 [i_4]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25992)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [(_Bool)1] [i_4] [i_4] [i_4] [i_4] [i_4]))) : (var_6)))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_8)))) ? ((+(4166122674U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))))))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_18 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1))), (((((/* implicit */unsigned long long int) 128844612U)) * (arr_16 [i_5])))));
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_19 += var_9;
                            var_20 = ((/* implicit */int) min((var_20), (min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_2)))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) var_7)))), (max(((((_Bool)1) ? (1582088504) : (((/* implicit */int) (short)25998)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)6)))))))))));
                            arr_28 [i_4] [i_4] [i_4] [i_6] [i_6] [i_8] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 128844605U)), (((((/* implicit */_Bool) (unsigned short)59622)) ? (11370845748688331114ULL) : (((/* implicit */unsigned long long int) 681269502))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1511))) & (12209038555813014772ULL))))));
        var_22 = ((/* implicit */_Bool) (-(((unsigned long long int) arr_8 [i_9] [2LL] [i_9] [2LL] [i_9]))));
    }
    var_23 -= ((/* implicit */unsigned int) var_8);
    var_24 = ((/* implicit */unsigned int) (+(var_6)));
    var_25 *= ((/* implicit */unsigned long long int) var_8);
}
