/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83511
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                arr_9 [i_0] [i_1 + 1] [i_2] [i_2] = ((/* implicit */short) var_4);
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(var_5)));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_2)) : (2959351093U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -4523749401378347364LL))))) : (var_8)));
            }
            for (long long int i_3 = 4; i_3 < 15; i_3 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3 + 2])) ? (((/* implicit */int) (unsigned char)94)) : (var_3)));
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */long long int) var_2)) : (var_1)));
                        }
                    } 
                } 
                arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (signed char)-1);
            }
            for (long long int i_6 = 4; i_6 < 15; i_6 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 1; i_7 < 17; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) (signed char)-1);
                            arr_26 [i_0] [i_7] [i_6] [i_7 + 1] [i_8] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)161));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) arr_5 [i_0]);
            }
            for (long long int i_9 = 4; i_9 < 15; i_9 += 3) /* same iter space */
            {
                var_17 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_0) : (((/* implicit */int) arr_25 [i_0])))));
                arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_9])) ? ((+(var_4))) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0]))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_13 [i_0] [i_1 - 1] [i_9 + 1]) : (var_5)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-11))) : (9223372036854775802LL))))))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1 + 1] [i_9 + 1]))) : (arr_24 [i_9 - 4] [i_9 + 3] [i_9 - 4] [i_9 + 2] [i_9 - 1] [i_9 - 2] [i_9 - 3])));
            }
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17256437418261961354ULL)) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_1] [i_1]))));
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 18; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0])) ? (var_2) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */_Bool) var_10)) ? (17256437418261961351ULL) : (((/* implicit */unsigned long long int) var_11))))));
                            arr_36 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)1)) ? (541951990) : (((/* implicit */int) (signed char)1))));
                            arr_37 [i_0] [i_1] [i_10] [i_11] [i_12] = ((/* implicit */int) (signed char)-3);
                        }
                    } 
                } 
            } 
            var_22 *= ((/* implicit */unsigned char) (~((+(((/* implicit */int) (signed char)-1))))));
        }
        var_23 = ((/* implicit */unsigned char) var_2);
    }
    /* vectorizable */
    for (short i_13 = 2; i_13 < 14; i_13 += 3) 
    {
        arr_41 [i_13 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)-3)) : (var_8))))));
        var_24 = ((/* implicit */unsigned short) var_11);
        var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)162))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
    {
        arr_44 [i_14] [i_14] = ((/* implicit */int) (signed char)-11);
        arr_45 [i_14] = (((!(((/* implicit */_Bool) 1190306655447590261ULL)))) ? (((/* implicit */long long int) 1987707818U)) : (((((/* implicit */long long int) var_0)) | (var_1))));
        arr_46 [i_14] [i_14] = ((/* implicit */unsigned long long int) (short)28480);
    }
    for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
    {
        var_26 = ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? ((+(((/* implicit */int) (unsigned char)49)))) : ((-(var_5)))))) : (((((/* implicit */_Bool) (short)-29920)) ? (((/* implicit */unsigned int) max((((/* implicit */int) (short)28480)), (-1438760685)))) : (799614485U))));
        /* LoopSeq 1 */
        for (int i_16 = 0; i_16 < 13; i_16 += 4) 
        {
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (arr_15 [i_15] [i_15] [i_16] [i_16]) : (((/* implicit */int) ((signed char) var_3)))))) ? (var_11) : (((/* implicit */unsigned int) var_3))));
            arr_55 [i_15] = ((/* implicit */unsigned long long int) min((-8212270481489428487LL), (((/* implicit */long long int) min((arr_17 [i_15] [i_15] [i_15] [i_15]), (((/* implicit */unsigned int) var_0)))))));
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_16])) ? (var_5) : (((/* implicit */int) (unsigned short)65528))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_52 [i_16]))))) : (((((/* implicit */_Bool) arr_52 [i_15])) ? (6449441603672232822LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28478)))))));
            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8212270481489428468LL))));
        }
        /* LoopSeq 1 */
        for (short i_17 = 0; i_17 < 13; i_17 += 3) 
        {
            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((9223372036854775802LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)2)))))) ? (-1829674639) : (((((/* implicit */_Bool) arr_51 [i_15] [i_17] [i_17])) ? (((/* implicit */int) (unsigned char)18)) : (var_0))))))));
            /* LoopNest 3 */
            for (unsigned int i_18 = 0; i_18 < 13; i_18 += 4) 
            {
                for (long long int i_19 = 0; i_19 < 13; i_19 += 4) 
                {
                    for (unsigned int i_20 = 0; i_20 < 13; i_20 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) (unsigned char)246))))))) || (((((/* implicit */_Bool) 0)) && ((!(((/* implicit */_Bool) (unsigned char)0)))))))))));
                            arr_68 [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) max(((~(min((((/* implicit */long long int) (signed char)6)), (-8973553923943650222LL))))), (((/* implicit */long long int) 0))));
                        }
                    } 
                } 
            } 
        }
        var_32 += ((/* implicit */unsigned int) -135510169);
        var_33 -= ((/* implicit */unsigned char) (signed char)-5);
    }
}
