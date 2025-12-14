/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86301
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
    var_11 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (4181374168129264194ULL))))), (((/* implicit */unsigned long long int) -129628764))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 123198876U))));
            arr_7 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) arr_4 [i_0] [i_0] [i_0]));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [(unsigned char)8]);
            var_12 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_6))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) : (-5410927987894911146LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) var_4))));
                        arr_16 [i_0] [i_0] [i_0] [i_3] [4U] = ((/* implicit */short) arr_3 [i_0 + 2]);
                    }
                } 
            } 
        }
        var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)246))));
    }
    for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) var_0);
        arr_20 [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), (((arr_19 [i_4] [i_4]) ? (max((((/* implicit */unsigned long long int) (signed char)-95)), (7200996702160960296ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(unsigned char)8] [(unsigned char)8])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_8 = 3; i_8 < 13; i_8 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned char) (+(arr_18 [i_4])));
                            arr_35 [(unsigned short)7] [(unsigned short)7] [i_4] [(unsigned short)7] [(unsigned char)14] = ((/* implicit */_Bool) arr_33 [i_4] [i_4] [i_4] [i_4] [i_4]);
                            arr_36 [i_4] [i_7] [i_6] [i_5] [i_4] = ((/* implicit */int) ((short) 8355840));
                        }
                        for (unsigned short i_9 = 1; i_9 < 16; i_9 += 4) 
                        {
                            arr_41 [i_4] [(unsigned char)12] [i_4] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)254)) - (1563977655)))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5185010769570111323LL)) ? (-8355830) : (((/* implicit */int) (unsigned char)234))))));
                            var_17 = ((/* implicit */long long int) var_2);
                        }
                        for (signed char i_10 = 1; i_10 < 16; i_10 += 1) 
                        {
                            arr_44 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (+(((int) (_Bool)1))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5128))) / ((+(arr_38 [i_4] [i_4] [i_4])))));
                            arr_45 [i_4] [(unsigned short)10] [i_6] [i_7] [(unsigned char)7] [i_6] [i_4] = (((-(((/* implicit */int) (unsigned char)99)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))));
                        }
                        arr_46 [i_4] [i_4] [(short)5] [i_7] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) (_Bool)1))) == (arr_32 [(_Bool)1] [(_Bool)1] [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 2])));
                        var_19 = ((/* implicit */unsigned char) (signed char)17);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_11 = 1; i_11 < 15; i_11 += 1) 
            {
                arr_49 [i_4 + 1] [i_5] [i_4] = ((/* implicit */int) var_4);
                arr_50 [i_4] [i_5] [i_4] [i_5] = ((/* implicit */unsigned long long int) var_4);
            }
            for (unsigned int i_12 = 3; i_12 < 15; i_12 += 1) 
            {
                var_20 = ((/* implicit */short) (-(0)));
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        {
                            var_21 = (~(5458521571716018033LL));
                            arr_61 [i_4] [i_12] [i_4] [i_14] = ((/* implicit */unsigned long long int) arr_17 [i_13]);
                            arr_62 [5ULL] [5ULL] [i_4] [i_13] [i_14] = ((/* implicit */short) ((((unsigned int) var_3)) << (((14720582176017730996ULL) - (14720582176017730992ULL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_15 = 1; i_15 < 16; i_15 += 3) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 1) 
                    {
                        {
                            arr_69 [i_4] [i_4] [i_12] [i_4] [i_16] = ((/* implicit */int) arr_26 [i_4] [i_5] [i_15] [i_5]);
                            arr_70 [i_4] [i_4] [i_12] [i_4] [i_4] = ((/* implicit */signed char) ((int) arr_28 [i_4 + 3] [i_12] [i_12 + 2] [i_12 - 2] [i_15 + 1]));
                            arr_71 [i_4] [i_5] [i_4] [i_16] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) (unsigned char)15)))));
                        }
                    } 
                } 
            }
        }
        arr_72 [i_4] = min((((/* implicit */long long int) 4U)), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)15872)) : (((/* implicit */int) arr_19 [(signed char)1] [i_4]))))), (min((465079405197111480LL), (arr_56 [i_4] [i_4] [i_4] [i_4]))))));
    }
}
