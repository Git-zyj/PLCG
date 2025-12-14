/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95773
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 |= ((/* implicit */unsigned short) ((((_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(unsigned char)4] [i_1 - 2])) && (((/* implicit */_Bool) arr_3 [(unsigned char)14] [i_1 - 1]))))) : (((((/* implicit */int) arr_3 [(_Bool)1] [i_1 - 1])) << (((((/* implicit */int) arr_3 [2U] [i_1 - 1])) - (53187)))))));
                var_17 = (+(max((((/* implicit */int) arr_4 [i_0])), ((~(((/* implicit */int) arr_1 [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 1; i_2 < 6; i_2 += 3) 
    {
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1375540829))));
        arr_7 [i_2 + 1] [i_2 + 1] = ((/* implicit */_Bool) arr_4 [(unsigned short)18]);
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) min((((/* implicit */long long int) ((signed char) arr_6 [i_2 + 3] [(short)0]))), (min((-1906725799035781602LL), (((/* implicit */long long int) (unsigned char)18))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((~(((/* implicit */int) arr_8 [i_4] [i_2 + 4] [i_3])))) ^ (((/* implicit */int) arr_8 [(short)2] [i_2 + 1] [i_4])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    var_21 -= ((/* implicit */unsigned char) ((_Bool) arr_15 [i_2] [(_Bool)1] [i_2]));
                    var_22 = ((/* implicit */signed char) min((((/* implicit */int) min((var_0), (arr_17 [i_5])))), (((((/* implicit */int) (unsigned char)31)) - (((/* implicit */int) max(((unsigned char)42), (var_6))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 1; i_7 < 8; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)13)) << (((((/* implicit */int) (unsigned char)179)) - (157))))))));
                        var_24 = ((/* implicit */short) max((((/* implicit */int) (signed char)24)), (((((/* implicit */_Bool) (short)-28277)) ? (((/* implicit */int) (unsigned short)27083)) : (((/* implicit */int) (_Bool)1))))));
                        var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_14 [i_5] [i_7 + 2])) : (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) arr_5 [i_2] [i_2])))))));
                    }
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (short)-30168)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_8] [i_8] [i_8] [i_8])) && (((/* implicit */_Bool) arr_19 [i_8] [i_8] [i_8]))))) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)59319)) - (59310)))))));
        arr_27 [i_8] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) + (2147483647))) >> (((((/* implicit */int) var_7)) - (4610)))));
        var_27 *= ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */int) (unsigned char)73)) / (((/* implicit */int) arr_12 [(_Bool)1] [i_8] [i_8] [i_8])))) >= ((-(((/* implicit */int) (_Bool)1))))))), ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)33664)) : (((/* implicit */int) var_6))))))));
        var_28 = arr_1 [i_8];
        var_29 = ((/* implicit */short) arr_3 [i_8] [i_8]);
    }
}
