/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69754
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_1 - 1]))));
            var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) var_8)), (var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0])))))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)5979)), (arr_4 [i_0])))), (min((((/* implicit */unsigned long long int) var_7)), (var_0)))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_14 [i_3] [10ULL] [i_3] [i_3] [(signed char)3] [i_3] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3])) || (((/* implicit */_Bool) var_1))))), (min((var_2), (((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [i_1 - 1])))))), (((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11789))) : (arr_9 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])))));
                        var_11 = ((/* implicit */unsigned long long int) min((var_11), (arr_8 [i_0] [6] [i_2])));
                        var_12 = ((/* implicit */signed char) ((((/* implicit */int) ((2147483647) < (((/* implicit */int) (short)-11790))))) / (min((((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_8))))))));
                        arr_15 [i_3] [i_1 + 1] [i_2] [i_3] [i_0] [0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (arr_8 [i_0] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2123712708)), (-1LL))))));
                    }
                } 
            } 
            arr_16 [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((short) (short)23986))) ? (arr_10 [i_0] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-5979)) : (((/* implicit */int) var_1))))) - (min((var_7), (((/* implicit */long long int) (short)-5255))))))));
            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_3)))) ? (min((((/* implicit */long long int) (unsigned char)155)), (var_7))) : (((/* implicit */long long int) min((var_4), (((/* implicit */int) arr_2 [i_1] [i_1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) < (arr_1 [i_0] [i_1 + 1]))))) : (((((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)5]))))))))));
        }
        arr_17 [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_0]);
        var_14 = ((/* implicit */_Bool) (((!(((((/* implicit */_Bool) -202219584)) || (((/* implicit */_Bool) (short)5998)))))) ? (((((unsigned long long int) (-9223372036854775807LL - 1LL))) / (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))))));
        arr_18 [i_0] &= ((/* implicit */short) arr_9 [i_0] [i_0] [(_Bool)1] [i_0]);
    }
    for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 2) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)186)) << (((-5992819035967174417LL) + (5992819035967174433LL)))))) ^ (var_7))))));
        var_16 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)186)), (arr_20 [i_4 - 2])))), (min((var_0), (((/* implicit */unsigned long long int) var_9)))))));
        arr_21 [i_4 - 4] [(unsigned short)8] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_19 [i_4 + 2] [i_4])))) ? (max((arr_20 [i_4 + 1]), (arr_20 [i_4 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) min((((short) var_5)), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) var_9)))))));
    }
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        var_18 *= ((/* implicit */short) var_1);
                        arr_32 [i_5] [i_6] [i_7] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) / ((+(arr_20 [i_8])))))), ((~(var_3)))));
                    }
                    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((unsigned int) (-2147483647 - 1))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)16256)) && (((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) ((short) (signed char)7)))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 1; i_9 < 12; i_9 += 3) 
                    {
                        for (short i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((short) ((short) ((((/* implicit */_Bool) var_9)) ? (arr_22 [i_5]) : (((/* implicit */unsigned long long int) arr_24 [i_9]))))))));
                                var_21 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) min((arr_33 [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_20 [i_9])))))) | (((((/* implicit */_Bool) ((2895249675U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((var_5) ? (((/* implicit */unsigned long long int) arr_20 [i_5])) : (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_5])) | (((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            for (signed char i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    {
                        arr_44 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] |= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_5] [i_5] [i_11] [i_12] [i_13])))))));
                        var_22 = max(((-(((/* implicit */int) (!(var_5)))))), (((((/* implicit */int) arr_25 [i_13] [i_12] [i_5])) + (((/* implicit */int) arr_25 [i_5] [i_12] [i_13])))));
                        var_23 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)12024)) ? (min((((/* implicit */unsigned long long int) arr_20 [i_5])), (arr_36 [i_5] [i_5] [i_12] [i_5] [i_5]))) : (216172782113783808ULL))), (((((/* implicit */_Bool) max((-5992819035967174417LL), (((/* implicit */long long int) (unsigned short)19340))))) ? (min((11979394112385325451ULL), (((/* implicit */unsigned long long int) (unsigned char)46)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        var_24 |= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) var_9))), (320170417U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */long long int) arr_43 [i_5] [i_5] [(short)13] [i_5] [i_5])), (arr_40 [i_5])))))) : (((((/* implicit */_Bool) -9223372036854775796LL)) ? (((/* implicit */long long int) ((int) 11979394112385325450ULL))) : (((var_5) ? (arr_40 [i_5]) : (arr_35 [i_5] [i_5] [i_5] [6ULL])))))));
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 15; i_14 += 2) 
        {
            for (long long int i_15 = 3; i_15 < 13; i_15 += 1) 
            {
                {
                    var_25 &= min((((/* implicit */unsigned long long int) (+(((-8472979800113611712LL) - (((/* implicit */long long int) ((/* implicit */int) (short)5252)))))))), (min((((/* implicit */unsigned long long int) arr_29 [i_14] [i_15] [i_15 - 2] [i_15])), (var_0))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 15; i_16 += 3) 
                    {
                        for (unsigned char i_17 = 4; i_17 < 13; i_17 += 2) 
                        {
                            {
                                var_26 ^= var_6;
                                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4096U)));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_18 = 1; i_18 < 13; i_18 += 3) 
        {
            for (unsigned char i_19 = 0; i_19 < 15; i_19 += 4) 
            {
                {
                    var_28 |= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_46 [i_5] [i_19])))));
                    arr_59 [i_5] [i_18] [i_5] = ((/* implicit */int) var_1);
                }
            } 
        } 
    }
    var_29 = ((/* implicit */long long int) max(((unsigned short)58696), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -888819140)))))));
}
