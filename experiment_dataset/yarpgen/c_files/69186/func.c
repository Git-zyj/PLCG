/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69186
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
    var_10 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [9ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) 692775529U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-493395444279815893LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0])))))));
                    var_11 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) var_8)) | (((var_2) - (((/* implicit */unsigned long long int) -4699789240849307220LL))))))));
                    arr_8 [i_2] [11LL] [i_0] = ((/* implicit */unsigned int) ((signed char) max((var_5), (arr_2 [i_0 - 2]))));
                    arr_9 [i_0] [(unsigned short)7] = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) + (((/* implicit */int) (short)3))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 3 */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        arr_12 [(signed char)5] = ((/* implicit */unsigned short) ((((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) var_3))))) - (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_6)))))));
        /* LoopSeq 3 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_13 *= ((/* implicit */unsigned long long int) max((((arr_15 [i_4 - 1] [i_4] [i_4 - 1]) ? (((/* implicit */int) arr_15 [i_4 - 1] [(unsigned short)4] [i_4 - 1])) : (((/* implicit */int) var_6)))), (((/* implicit */int) max((arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1]), (arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1]))))));
                        arr_21 [i_5] [i_5] [(signed char)4] [11U] = ((/* implicit */unsigned long long int) arr_4 [i_6]);
                        arr_22 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        arr_23 [(signed char)2] [i_5] [i_5] [i_3] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                    }
                } 
            } 
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_4 - 1] [i_4] [(signed char)8] [i_4])) - (((/* implicit */int) arr_20 [i_4 - 1] [(_Bool)0] [i_4 - 1] [(_Bool)1]))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((((/* implicit */short) arr_20 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4])), ((short)17))))));
        }
        for (signed char i_7 = 1; i_7 < 15; i_7 += 2) 
        {
            var_15 += ((/* implicit */short) (signed char)-8);
            arr_26 [i_3] [i_7] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7]))) ^ (var_2))) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_3] [i_7]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2)))))));
            arr_27 [i_7] [i_7 - 1] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                var_16 += ((/* implicit */long long int) var_6);
                var_17 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) var_4))))));
            }
        }
        for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) arr_11 [i_9] [i_9]))), (((((/* implicit */_Bool) 2195000268U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))))))));
            var_19 = ((/* implicit */_Bool) ((int) (short)120));
        }
        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [4] [10])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((arr_10 [i_3]) + (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)120))) + (var_7))) - (((/* implicit */unsigned int) arr_6 [i_3] [i_3] [i_3])))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_21 = ((/* implicit */int) (short)-7);
        var_22 = ((/* implicit */int) ((3295254230559974997ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        arr_34 [i_10] = ((/* implicit */_Bool) var_8);
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_38 [i_11] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) 16760832)), (0U)));
        var_23 = ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_11]))))))) * (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)86))) & (692775520U)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-97)) > (((/* implicit */int) (_Bool)1))))) : ((-(-1601786477))))));
    }
    var_24 *= ((/* implicit */unsigned char) ((((((((/* implicit */int) var_5)) & (((/* implicit */int) var_0)))) >= (((/* implicit */int) var_1)))) ? (((/* implicit */unsigned long long int) (+(((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) : (min((var_2), (((/* implicit */unsigned long long int) var_7))))));
}
