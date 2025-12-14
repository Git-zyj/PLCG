/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9627
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
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(2305843009213693951LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) + (0LL))))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
            arr_6 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned char) var_13);
        }
        for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_16 -= ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) var_5)), ((unsigned char)171))))))) ? (((long long int) 4LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [1LL] [i_2]))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    {
                        var_17 = -1237676756817866216LL;
                        arr_16 [i_0] [i_0 + 2] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-28404))) != (-9137713112208469048LL)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0])))) != (arr_12 [i_6])))), (((((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 2] [i_0 + 3])) + (((/* implicit */int) arr_9 [i_0] [i_5] [i_6]))))));
                        var_19 *= ((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) min(((unsigned short)0), (((/* implicit */unsigned short) var_10)))))));
                        var_20 &= ((/* implicit */long long int) (unsigned char)231);
                    }
                } 
            } 
            arr_21 [i_0] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_0 [i_0 - 2]), ((unsigned char)97)))) ? (((/* implicit */int) (short)-25)) : (((/* implicit */int) var_15)))) / (((/* implicit */int) (short)-28404))));
        }
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                for (long long int i_9 = 1; i_9 < 9; i_9 += 3) 
                {
                    {
                        var_21 = ((/* implicit */long long int) ((signed char) (short)-19266));
                        arr_30 [i_0 - 2] [i_7] [i_0] [i_0 + 3] = ((/* implicit */int) ((unsigned int) ((unsigned int) (unsigned char)197)));
                    }
                } 
            } 
        } 
    }
    var_22 -= ((/* implicit */short) var_4);
    var_23 |= ((long long int) ((var_3) / (((((/* implicit */long long int) ((/* implicit */int) var_14))) * (-1LL)))));
    /* LoopNest 3 */
    for (short i_10 = 3; i_10 < 19; i_10 += 3) 
    {
        for (short i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_24 = ((min((((/* implicit */long long int) arr_31 [i_10] [i_10 - 3])), (7868237458250923398LL))) & (((long long int) arr_31 [i_11] [i_10 - 2])));
                    arr_39 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_10 - 2] [i_10]))))) ? (((((/* implicit */_Bool) var_14)) ? ((+(-4652352391643863441LL))) : (((/* implicit */long long int) (+(0U)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_10] [i_11])))));
                    arr_40 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) min((((short) arr_34 [i_10] [i_11] [i_12])), (((/* implicit */short) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 869128392U)) ? (-8269431235830721058LL) : (-1LL))) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (arr_33 [i_10 - 2] [i_12])));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_25 = ((long long int) ((((((/* implicit */_Bool) (signed char)127)) ? (-8269431235830721058LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) != (min((((/* implicit */long long int) arr_36 [i_10] [i_10])), (var_3)))));
                                var_26 = 484554362728101171LL;
                                arr_47 [i_11] [i_12] [i_14] = ((/* implicit */long long int) ((((((/* implicit */int) arr_31 [i_12] [i_10 - 1])) + (2147483647))) >> (((-6592551837891711467LL) + (6592551837891711484LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
