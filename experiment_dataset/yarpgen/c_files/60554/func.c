/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60554
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_3))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) (unsigned short)8188)) : (((/* implicit */int) arr_3 [i_0] [i_0 + 1]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_0 - 2] [i_1 + 2]))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                var_17 = var_7;
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_2 [i_0 - 1]), ((unsigned short)59821)))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
            }
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                arr_10 [i_1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)134)), (((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) arr_4 [i_1])))))))));
                arr_11 [(unsigned short)14] [i_1] = (unsigned char)19;
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)3072)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (unsigned short)32694)))) ^ (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (unsigned short)30720)))))))));
            }
        }
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 + 1])) < (((/* implicit */int) var_2))))), (max(((unsigned char)1), ((unsigned char)92)))));
    }
    for (unsigned char i_4 = 4; i_4 < 16; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)17232))));
        var_22 &= min(((unsigned short)27395), (((/* implicit */unsigned short) (unsigned char)1)));
    }
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_14 [i_5] [i_5]), (arr_14 [i_5] [i_5])))) ? (((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)54)), ((unsigned short)62930)))) + (((/* implicit */int) arr_15 [i_5])))) : (((/* implicit */int) ((unsigned char) arr_16 [i_5])))));
        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (unsigned short)9741))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) arr_15 [i_5])))) : (((/* implicit */int) arr_15 [i_5]))));
        var_25 = ((/* implicit */unsigned char) arr_16 [i_5]);
        var_26 &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)150))))) / (((((/* implicit */_Bool) (unsigned short)30698)) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (unsigned short)27791))))));
    }
    var_27 *= ((/* implicit */unsigned short) max(((unsigned char)163), ((unsigned char)9)));
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65525)) & (((/* implicit */int) (unsigned char)254))));
}
