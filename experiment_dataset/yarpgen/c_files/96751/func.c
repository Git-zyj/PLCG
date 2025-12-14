/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96751
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
    var_17 = ((/* implicit */unsigned char) var_2);
    var_18 = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) (unsigned short)63047)) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 &= ((/* implicit */unsigned short) min((max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)51214)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_0 [(unsigned short)18])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
        var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_4)), (var_8))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [13U] = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) var_7)))));
                    var_21 = ((/* implicit */long long int) max((var_21), ((((+(min((((/* implicit */long long int) var_14)), (arr_7 [(_Bool)1] [i_1] [i_2]))))) / (arr_7 [i_0] [i_0] [i_0])))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_4), (min((var_4), (((/* implicit */signed char) (_Bool)1))))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (15828599708469389507ULL))), (((/* implicit */unsigned long long int) arr_1 [i_2]))))));
                }
            } 
        } 
        arr_10 [(signed char)8] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (2693485843U)))), (var_9)))) ? ((+(((/* implicit */int) (unsigned short)24472)))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) var_3))), (var_8))))));
    }
    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_15))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 + 2] [i_5 + 2] [i_5 - 2])) ? (arr_14 [i_5 - 2] [i_5 + 2] [i_5 - 2]) : (arr_21 [i_5] [i_5 + 2] [i_5 - 2]))))));
                        arr_22 [i_6] [(unsigned short)19] [i_6] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_11)));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) 232313686U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12219))) : (-4547197854487133328LL))))));
                        arr_23 [i_3] [i_4] [i_4] = (-(((/* implicit */int) var_5)));
                    }
                } 
            } 
        } 
    }
    var_24 &= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
}
