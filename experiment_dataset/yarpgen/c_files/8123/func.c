/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8123
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1])))))), (((((/* implicit */_Bool) ((signed char) (unsigned char)0))) ? (((/* implicit */int) ((unsigned short) (unsigned short)2044))) : (max((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])), (0)))))));
            arr_7 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((int) arr_3 [i_0 + 1] [i_1])), (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1] [i_0])) ? (262136) : (-6)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 - 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))))) : (((((/* implicit */_Bool) (unsigned short)65507)) ? (504U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3)))))));
            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 262136))))), (((unsigned short) (~(((/* implicit */int) arr_0 [i_1] [i_1]))))))))));
            var_13 = ((/* implicit */short) (+((+(((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
        }
        arr_8 [i_0] = ((/* implicit */unsigned short) max((((int) (+(arr_4 [i_0] [i_0] [i_0])))), ((+(((/* implicit */int) (unsigned short)2016))))));
        arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)244))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) & (arr_4 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)12))))))))));
    }
    for (signed char i_2 = 2; i_2 < 20; i_2 += 1) 
    {
        var_14 += ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_10 [i_2]))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (unsigned char)12))))) ? (min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_11 [i_2 - 2])), (arr_1 [i_2])))), (max((4294967283U), (((/* implicit */unsigned int) (unsigned short)112)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            arr_15 [i_2] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-32740))));
            arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_3 [i_2] [i_2]))))));
        }
        var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) 4294966792U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)(-127 - 1)))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-((~(((/* implicit */int) arr_13 [i_2]))))))) ? (((/* implicit */int) max(((unsigned short)29), (((/* implicit */unsigned short) arr_12 [i_2 - 2] [i_2 - 2]))))) : (((/* implicit */int) ((unsigned char) arr_13 [i_2 - 1])))));
    }
    var_18 = ((/* implicit */signed char) var_5);
    var_19 *= ((/* implicit */signed char) ((short) (+(((((/* implicit */int) var_8)) - (var_1))))));
}
