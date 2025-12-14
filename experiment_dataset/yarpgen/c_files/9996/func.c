/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9996
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = (unsigned short)63;
        var_20 ^= ((/* implicit */unsigned short) var_5);
        var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65473)) << (((((/* implicit */int) var_7)) - (8021)))))) ? (((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) arr_1 [(signed char)17])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_1 [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_6)))) ? (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)59)))) : (((/* implicit */int) ((unsigned short) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)7))));
            arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((arr_4 [i_1]) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2])))));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        arr_15 [(signed char)9] [(signed char)9] [(unsigned short)7] [i_4] [i_3] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((((/* implicit */int) arr_12 [i_1] [i_1 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_12 [i_1] [i_1 - 1])) + (23))) - (7)))))) : (((/* implicit */signed char) ((((((/* implicit */int) arr_12 [i_1] [i_1 - 1])) + (2147483647))) << (((((((((((/* implicit */int) arr_12 [i_1] [i_1 - 1])) + (23))) - (7))) + (75))) - (17))))));
                        var_23 = arr_4 [i_1];
                        var_24 = ((/* implicit */signed char) var_7);
                        var_25 |= ((/* implicit */signed char) (-(((/* implicit */int) arr_13 [i_1 - 1]))));
                    }
                } 
            } 
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_14 [i_1] [i_1] [13LL] [i_2]))));
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) arr_10 [i_1] [i_1 - 1] [i_1] [i_1 + 1]))));
        }
        for (long long int i_5 = 2; i_5 < 22; i_5 += 3) 
        {
            var_28 = ((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_5 - 2]))));
            var_29 = ((/* implicit */long long int) ((unsigned short) var_12));
            arr_18 [i_1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 1152912708513824768LL)) || (((/* implicit */_Bool) (signed char)127)))));
        }
        for (long long int i_6 = 2; i_6 < 20; i_6 += 1) 
        {
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) || (((/* implicit */_Bool) ((long long int) var_14)))));
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    {
                        var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                        var_32 &= ((/* implicit */signed char) ((arr_7 [i_1] [i_7]) >> (((((/* implicit */int) (unsigned short)65525)) - (65481)))));
                        arr_26 [i_1 - 1] [(unsigned short)15] [i_6] [(unsigned short)18] [i_1] [i_8] = ((/* implicit */unsigned short) (signed char)-1);
                    }
                } 
            } 
        }
        arr_27 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) || (((/* implicit */_Bool) -1119429010461167287LL))));
        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)1)))))));
    }
    for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        arr_31 [i_9] = ((/* implicit */unsigned short) min((-7789265740992958610LL), (((((/* implicit */_Bool) var_13)) ? (4889089389719961592LL) : ((-9223372036854775807LL - 1LL))))));
        var_34 = ((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) var_3))))), (var_11))) / (min((((1152912708513824768LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41636))))), (min((var_10), (((/* implicit */long long int) var_14)))))));
    }
    var_35 = ((/* implicit */unsigned short) var_11);
}
