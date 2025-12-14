/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57788
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned char) -2147483618))) : (((/* implicit */int) arr_1 [i_0 - 2]))))) + (((unsigned int) (short)7))));
        var_20 = ((/* implicit */unsigned char) ((((-1LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_13))));
        var_21 = ((/* implicit */long long int) (unsigned char)255);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) max((max((arr_9 [i_0 - 2]), (arr_9 [i_0 - 1]))), (((/* implicit */short) var_9))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_1] = ((/* implicit */unsigned short) arr_9 [(unsigned short)13]);
                            arr_14 [(signed char)10] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -3394229185014779539LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)18)) && (((/* implicit */_Bool) var_10)))))) : ((+(-1855122642207791137LL)))));
                            var_22 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1528517027U))))) <= (((/* implicit */int) (unsigned char)99)))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned char)11] [(unsigned char)11] [i_4])) && (((/* implicit */_Bool) arr_9 [5ULL]))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_0] [(unsigned short)6] [i_2] [3] [i_4 + 1] [i_0] [i_0 - 1])), (var_10))))))) : (((/* implicit */int) arr_3 [i_1] [i_0 - 2] [i_2]))));
                            var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_14)) : (9914787957606596254ULL)))) ? (((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4 + 2] [i_1] [i_4 - 1]))))) ? (((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) (_Bool)1)) : (-383795524))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) / (var_10)))) || (((/* implicit */_Bool) (unsigned char)165)))))));
                        }
                        var_25 -= ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) (unsigned char)6)) || (((/* implicit */_Bool) var_12)))) ? (min((var_5), (((/* implicit */unsigned int) arr_9 [(unsigned char)11])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
                    }
                } 
            } 
        } 
        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) var_10)) : (var_5)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0] [i_0 - 2]))) / (29LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0]))))) : (((/* implicit */long long int) ((arr_2 [i_0 - 1] [i_0 - 2] [i_0]) ? (((/* implicit */int) var_9)) : (var_8))))));
    }
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_21 [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) min(((-(((/* implicit */int) var_11)))), (((/* implicit */int) var_0))));
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967281U)) || (((/* implicit */_Bool) (unsigned short)127))));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) var_4);
    var_29 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (_Bool)1))))));
    var_30 = (+(((long long int) ((unsigned short) (short)6))));
}
