/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69665
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
    var_13 -= ((/* implicit */int) var_9);
    var_14 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) (+(6378968123751854678LL)))), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)-32765)))))));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((signed char) ((arr_1 [i_0]) ? ((-(((/* implicit */int) (short)32745)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)32765)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) > ((-(((/* implicit */int) (short)32763))))));
        var_17 = ((/* implicit */unsigned int) var_2);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_18 |= ((/* implicit */int) arr_3 [i_1] [i_0]);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                var_19 = arr_4 [i_0 + 1] [i_1 - 1] [i_2];
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */signed char) arr_5 [i_3] [i_3] [i_3] [i_3 + 1]);
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) 2023050605U))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [(signed char)9] [i_1] [i_1] [i_4] [i_2])) ? (((((/* implicit */_Bool) arr_12 [i_4] [i_1] [i_1] [i_4])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_4])))) : ((~(((/* implicit */int) (signed char)-27))))));
                    var_22 = ((/* implicit */short) var_8);
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (arr_8 [i_4] [i_4])));
                }
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))));
                var_25 = ((int) (signed char)58);
            }
        }
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_26 &= ((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned long long int) (~(var_10))))));
        arr_15 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) arr_14 [i_5])) : (var_4)));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) (_Bool)1);
        arr_20 [i_6] [i_6] = ((/* implicit */_Bool) min(((~(var_8))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) arr_18 [i_6])))), ((+(((/* implicit */int) arr_19 [(unsigned char)16])))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        var_28 = ((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) arr_10 [i_7] [i_7] [(signed char)5] [i_7])), ((~(arr_14 [i_7])))))) + (min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30576))) : (arr_2 [i_7]))), (((/* implicit */long long int) ((_Bool) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7])))))));
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            var_29 = ((/* implicit */short) var_6);
            /* LoopSeq 2 */
            for (short i_9 = 4; i_9 < 9; i_9 += 4) 
            {
                var_30 -= ((/* implicit */long long int) ((signed char) arr_0 [i_8] [i_8]));
                arr_28 [i_7] [i_7] [9U] [i_7] = ((/* implicit */unsigned int) min((arr_14 [i_7]), (max((((((/* implicit */int) (unsigned short)8191)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) 2147483647)))))));
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) 0ULL)))))) || (((/* implicit */_Bool) min((min((arr_5 [i_7] [i_7] [i_7] [i_9]), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_21 [i_9]))))))))));
                var_32 &= ((/* implicit */long long int) -2147483647);
                var_33 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_7] [i_8] [i_9])) ? (min((-8357437096602734719LL), (((/* implicit */long long int) (signed char)-27)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
            }
            for (short i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                var_34 = ((/* implicit */unsigned int) max((((signed char) ((2023050605U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8])))))), ((signed char)-1)));
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    var_35 -= ((/* implicit */unsigned int) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8] [(signed char)4]))) | (arr_8 [i_7] [i_7]))) & (((/* implicit */unsigned long long int) var_10))))));
                    arr_35 [i_7] [i_7] [i_10] [i_7] [i_7] = ((/* implicit */_Bool) (~(7317598806888188521LL)));
                    var_36 = ((/* implicit */short) ((int) arr_27 [i_8] [i_8]));
                }
            }
            var_37 -= ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
        }
        for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            arr_38 [i_7] = ((/* implicit */_Bool) (~((~(arr_0 [i_7] [i_12])))));
            var_38 = ((/* implicit */unsigned short) max((2047LL), (((((min((-4702004301330959909LL), (arr_16 [i_7] [i_7]))) + (9223372036854775807LL))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (short)32765))) & (var_8))) - (10488U)))))));
        }
        arr_39 [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) var_5)))));
    }
}
