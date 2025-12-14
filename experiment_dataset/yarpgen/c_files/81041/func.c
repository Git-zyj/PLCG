/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81041
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) max((arr_1 [i_0]), (((/* implicit */unsigned short) var_0))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) max((15462422910578995792ULL), (((/* implicit */unsigned long long int) -8088094229662584610LL)))))));
        }
        for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                arr_13 [i_0] [i_0] [13U] = ((/* implicit */int) ((unsigned char) 2878103949U));
                var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -851229955495439532LL)) && (((/* implicit */_Bool) arr_3 [i_0] [i_2])))) || ((!(((/* implicit */_Bool) var_8))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */int) var_10);
                            arr_19 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) -851229955495439532LL);
                        }
                    } 
                } 
                var_18 *= ((/* implicit */int) (!(((/* implicit */_Bool) -8194972298620734487LL))));
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)160)))))));
            }
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 13; i_6 += 3) 
            {
                for (signed char i_7 = 1; i_7 < 15; i_7 += 2) 
                {
                    {
                        arr_26 [i_0] [i_2] [i_2] [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) arr_24 [i_6] [i_7 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1]);
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)7609)), (8088094229662584610LL)))) && (((((/* implicit */int) (unsigned short)7609)) != (((/* implicit */int) var_12))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            var_21 |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)42419)), (-1576668482461006850LL)));
                            var_22 = ((/* implicit */unsigned char) max(((~((+(((/* implicit */int) var_12)))))), (((/* implicit */int) ((unsigned char) 15659133311897486586ULL)))));
                            arr_30 [i_8] [i_0] [i_0] [i_6] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned char) ((long long int) 5728990263624003921ULL)))) && ((!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_27 [i_0] [i_2] [i_0] [i_7] [i_8] [i_0])), (var_6)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) arr_25 [i_0] [i_7] [i_6] [i_2] [i_0] [i_0]);
                            arr_35 [i_0] = ((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_0] [i_0]);
                            var_24 = ((/* implicit */long long int) arr_29 [(short)13] [i_2]);
                        }
                        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
                        {
                            var_25 = max((((unsigned char) 851229955495439532LL)), (((/* implicit */unsigned char) (signed char)24)));
                            arr_39 [i_2] [i_2] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) (unsigned char)130)))));
                        }
                        var_26 = ((/* implicit */unsigned int) (-((-(var_10)))));
                    }
                } 
            } 
        }
        for (short i_11 = 2; i_11 < 15; i_11 += 2) 
        {
            arr_44 [i_11] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) (unsigned short)54788));
            arr_45 [i_0] [i_0] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) -8194972298620734471LL))));
            var_27 = ((/* implicit */unsigned char) var_6);
            arr_46 [i_0] [i_11] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)255))));
        }
        /* LoopNest 2 */
        for (unsigned short i_12 = 1; i_12 < 14; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) ((long long int) (short)(-32767 - 1)));
                    var_29 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) (short)19028))))), (min((((/* implicit */long long int) (_Bool)1)), (-851229955495439532LL)))));
                    var_30 = ((/* implicit */unsigned short) ((unsigned long long int) arr_3 [i_0] [i_0]));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            {
                                arr_58 [i_0] [i_12] [i_14] [i_0] [i_0] [i_0] [i_13] = ((/* implicit */unsigned char) arr_52 [i_0] [i_12] [i_13] [i_15] [i_0] [i_0]);
                                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)43378))))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (unsigned short)54788))))))));
                                arr_59 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((-865748560) < (((/* implicit */int) (unsigned char)239))))) != ((~(((/* implicit */int) (short)21615))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 1; i_16 < 15; i_16 += 3) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)12227)), (3LL)));
                                var_33 = ((/* implicit */long long int) (+(((/* implicit */int) (short)15))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_34 = max((var_9), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)21)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) != (((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12237)))))))));
    /* LoopSeq 1 */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_68 [i_18] = ((/* implicit */int) ((long long int) ((unsigned short) var_13)));
        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 944273910)) && (((/* implicit */_Bool) (unsigned char)91)))))));
    }
    var_36 = ((/* implicit */unsigned char) ((unsigned long long int) -1127188771563291030LL));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_19 = 0; i_19 < 16; i_19 += 3) 
    {
        arr_71 [i_19] [i_19] = ((/* implicit */unsigned char) (+(arr_69 [i_19] [i_19])));
        var_37 |= ((/* implicit */int) ((6206997757414642722ULL) << (((-865748560) + (865748618)))));
        var_38 = ((/* implicit */unsigned short) ((arr_11 [i_19] [i_19] [i_19] [i_19]) >= (((/* implicit */long long int) ((int) (short)1)))));
        var_39 = ((((/* implicit */_Bool) ((unsigned char) -865748572))) ? (((/* implicit */int) arr_65 [i_19] [i_19] [i_19] [i_19] [i_19])) : (((/* implicit */int) ((2915638225236518884ULL) >= (13349884416872115131ULL)))));
    }
}
