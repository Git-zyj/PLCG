/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59520
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))) : (max((arr_8 [i_1] [i_1] [i_2] [i_2]), (arr_7 [i_1]))))))));
                    arr_9 [i_1] [i_2] [i_1] [i_2] = ((/* implicit */short) arr_7 [i_1]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_3])) ? (arr_10 [i_0] [i_4]) : (var_8)))) ? ((-(arr_10 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_4])) ? (arr_10 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5522)))))));
                    arr_16 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))), (((/* implicit */int) (unsigned char)76))))) ? (arr_6 [i_4] [i_3]) : (((((/* implicit */_Bool) (unsigned char)180)) ? (arr_8 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61124)))))))));
                }
            } 
        } 
        arr_17 [i_0] [8ULL] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [4ULL] [i_0] [i_0])) ? (((/* implicit */long long int) var_11)) : (arr_3 [(_Bool)1] [i_0] [i_0]))))));
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)120)) ? (arr_8 [(signed char)0] [(unsigned short)2] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [8ULL]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-9849)) & (((/* implicit */int) arr_5 [(_Bool)1])))))))) ? (max((((/* implicit */int) (unsigned char)57)), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (unsigned char)203)))))) : (((/* implicit */int) var_3))));
        arr_19 [(short)8] [i_0] = ((/* implicit */signed char) ((int) (unsigned char)199));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_22 [i_5])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4399))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) arr_22 [i_5])) : (((/* implicit */int) arr_22 [i_5])))))));
        var_16 = ((short) ((((/* implicit */_Bool) max((3846397577U), (((/* implicit */unsigned int) var_12))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_21 [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5])))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+((+(((/* implicit */int) arr_22 [i_5])))))))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min(((unsigned short)4399), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_5]))))))))));
                                var_19 &= ((/* implicit */long long int) ((signed char) (~(((((/* implicit */_Bool) (unsigned short)4424)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) : (arr_32 [i_5] [i_7] [i_5] [i_7] [i_7]))))));
                            }
                        } 
                    } 
                    arr_35 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)61126)) << (((((/* implicit */int) (unsigned short)4399)) - (4396)))))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)185), ((unsigned char)56))))) : ((-(arr_21 [i_5])))));
                    arr_36 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)179))));
                    arr_37 [i_5] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_31 [i_5] [i_5] [10ULL] [i_5] [i_5])))) / (((((/* implicit */_Bool) arr_29 [i_5] [i_6] [i_7] [i_6])) ? (((/* implicit */int) arr_22 [(signed char)14])) : (((/* implicit */int) max(((unsigned short)61126), (((/* implicit */unsigned short) (signed char)113)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_40 [i_10] = (unsigned short)4405;
        arr_41 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)198)) ? (arr_28 [i_10] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61124)))));
    }
    for (short i_11 = 0; i_11 < 15; i_11 += 3) 
    {
        arr_46 [i_11] = ((/* implicit */short) max((((/* implicit */int) ((short) arr_22 [i_11]))), ((((-(((/* implicit */int) var_3)))) - ((+(((/* implicit */int) var_4))))))));
        var_20 *= ((/* implicit */signed char) max((((/* implicit */short) ((((/* implicit */int) arr_25 [i_11] [4ULL] [(_Bool)0])) >= (((/* implicit */int) arr_25 [i_11] [i_11] [(short)12]))))), (max((arr_24 [i_11] [i_11]), (((/* implicit */short) var_7))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) arr_44 [i_11] [i_11])) >= ((~(((/* implicit */int) (unsigned char)53)))))))));
        var_22 += ((/* implicit */unsigned int) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_11]))))) + ((+(((/* implicit */int) (unsigned char)80)))))), (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (max((((/* implicit */unsigned char) (signed char)-40)), ((unsigned char)56))))))));
    }
    var_23 *= ((/* implicit */_Bool) var_5);
}
