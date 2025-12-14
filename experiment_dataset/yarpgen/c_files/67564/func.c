/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67564
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
    var_17 = ((/* implicit */unsigned long long int) var_14);
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_16))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((-7277683756007751799LL), (((/* implicit */long long int) var_14)))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))) ? (max((arr_2 [(_Bool)1]), (((/* implicit */long long int) (_Bool)1)))) : (((arr_2 [i_0]) ^ (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((arr_2 [i_1 + 2]) + (((/* implicit */long long int) var_8))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned char) (~((((~(((/* implicit */int) (signed char)-107)))) ^ (((/* implicit */int) var_13))))));
                        var_20 |= ((/* implicit */unsigned long long int) min(((signed char)-64), (((/* implicit */signed char) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) max(((-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (unsigned char)2))))))), (((((_Bool) arr_0 [i_2])) ? (((((/* implicit */int) var_14)) << (((var_0) - (12496140222312263516ULL))))) : (((/* implicit */int) var_3))))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) max((((((arr_3 [i_2]) ? (4993442262834319041ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) (!(arr_14 [i_4 + 1] [i_4 + 1] [(unsigned short)13] [i_4 - 2] [i_4]))))));
                            arr_18 [i_3] [i_4] = ((/* implicit */unsigned char) (unsigned short)36614);
                            arr_19 [i_0] [i_1] [i_2] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_16))));
                            var_22 -= ((/* implicit */unsigned char) max(((+(0ULL))), (min((((/* implicit */unsigned long long int) var_15)), (arr_5 [i_1 + 2] [(_Bool)1] [i_4 - 1])))));
                        }
                        var_23 = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */signed char) arr_12 [i_0] [i_0] [i_2] [i_2] [i_3]))))))));
                    }
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)22708)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_1])))) : (((((/* implicit */_Bool) -493577740538210369LL)) ? (8162301886340874341LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))), (((/* implicit */long long int) arr_14 [i_1 - 1] [i_1 - 3] [(unsigned short)22] [i_1 - 1] [i_0])))))));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) min((1048575ULL), (((/* implicit */unsigned long long int) (unsigned short)39974))))))));
        arr_23 [i_5] = ((/* implicit */unsigned short) var_14);
        /* LoopNest 2 */
        for (long long int i_6 = 3; i_6 < 17; i_6 += 4) 
        {
            for (signed char i_7 = 2; i_7 < 14; i_7 += 1) 
            {
                {
                    arr_31 [i_6] [i_6] = ((/* implicit */unsigned short) max((-8336374483990397217LL), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_7] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6] [i_6] [i_6]))) : (var_0))) == ((+(var_0))))))));
                    var_25 = ((/* implicit */_Bool) arr_20 [i_6] [i_7]);
                    var_26 = ((/* implicit */short) max((var_26), (var_3)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_8 = 1; i_8 < 17; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                for (signed char i_10 = 2; i_10 < 15; i_10 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((_Bool) arr_29 [i_5] [i_10])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_5)))) + ((-(((/* implicit */int) arr_12 [i_11] [i_8 + 1] [(_Bool)1] [i_8 + 1] [(_Bool)1]))))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4503599627370464ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9] [i_5]))) : (var_0)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))));
                            arr_42 [i_5] [i_8] [(unsigned short)5] [i_10] [i_8] [i_11] [i_11] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_10 [i_8 - 1] [i_8 - 1] [i_8 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_37 [i_8 - 1] [i_10 + 2] [i_10 - 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_8 + 1] [i_8] [i_8] [i_8 - 1] [i_10 + 1])))))));
                        }
                        /* vectorizable */
                        for (signed char i_12 = 3; i_12 < 15; i_12 += 1) 
                        {
                            arr_46 [i_5] [i_5] [13ULL] [i_8] [i_12] = ((/* implicit */signed char) ((arr_12 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_8 + 1] [i_8 + 1] [i_10 - 1] [i_8]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_8] [i_8] [i_9] [i_10] [i_12] [i_12 + 3])))));
                            arr_47 [i_8] [i_10] [i_9] [i_8 + 1] [i_8] = ((/* implicit */short) ((((/* implicit */int) (signed char)14)) << (((13453301810875232554ULL) - (13453301810875232531ULL)))));
                            var_30 = ((((/* implicit */_Bool) -5794918868057088919LL)) ? (-7277683756007751789LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_13 = 3; i_13 < 24; i_13 += 4) 
    {
        var_31 ^= ((_Bool) min((var_9), (((/* implicit */unsigned long long int) arr_2 [i_13]))));
        var_32 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((signed char) ((_Bool) arr_12 [i_13] [i_13 - 2] [i_13] [i_13 - 2] [i_13])))), (min((arr_16 [i_13] [i_13 - 2] [i_13 - 3] [i_13] [i_13 - 2]), (arr_16 [i_13] [i_13 - 3] [i_13 - 3] [i_13] [i_13 - 2])))));
    }
}
