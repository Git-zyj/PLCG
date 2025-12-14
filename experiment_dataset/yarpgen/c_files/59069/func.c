/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59069
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
    var_16 = ((((/* implicit */_Bool) var_11)) ? ((+(((((/* implicit */_Bool) 9206634403661533274ULL)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_5 [i_1] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0]))));
            arr_6 [i_1] [i_1] [9] = ((/* implicit */unsigned char) (-(arr_2 [i_1] [i_0])));
            arr_7 [i_1] [i_1] [i_0] = ((/* implicit */short) arr_4 [i_0] [i_1] [i_0]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        arr_16 [i_2] [i_2] [(unsigned char)10] [i_4] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                        arr_17 [i_0] [(short)12] [i_2] [i_3] [i_4] [(short)16] = ((((/* implicit */_Bool) (short)803)) ? (2051122253189214352ULL) : (16395621820520337257ULL));
                        arr_18 [i_0] [i_2] [i_3] [i_2] [i_0] = ((/* implicit */unsigned char) arr_8 [i_2]);
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned char) ((((((var_5) % (2051122253189214352ULL))) > (min((var_2), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_2])))))) ? (arr_4 [i_0] [i_0] [(unsigned char)9]) : (var_9)));
            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_0])))))) ? (min(((~(2051122253189214352ULL))), (((/* implicit */unsigned long long int) arr_13 [i_2] [i_2] [i_2])))) : ((~(((arr_8 [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_6 = 2; i_6 < 16; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    {
                        arr_27 [(short)4] [(short)4] [(short)4] [i_5] [i_6 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_23 [i_5] [i_6 - 2] [i_5]), ((+(3116212915987651802ULL))))))));
                        arr_28 [i_0] [i_5] [i_0] [i_7] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2051122253189214352ULL), (arr_15 [8ULL] [i_5] [i_0] [i_5] [i_5] [i_0])))) ? ((+(arr_19 [i_0] [i_5]))) : (((((/* implicit */_Bool) 15928364169556794256ULL)) ? (12242554023348868906ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)511)))))))) ? (arr_21 [i_5]) : (((((/* implicit */unsigned long long int) ((int) 2147483647))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) & (15159238368573607201ULL))))));
                    }
                } 
            } 
            arr_29 [i_5] = (+((+(((((/* implicit */_Bool) arr_11 [i_5] [i_5] [(short)4] [i_5])) ? (7067111600114512024ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
        {
            arr_32 [i_0] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_20 [i_0]), (arr_20 [i_8])))) ? (((/* implicit */unsigned long long int) min((((int) 5485918428037580480ULL)), (((/* implicit */int) ((unsigned char) 307161332)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) (unsigned char)15))))), (12754887229555271748ULL)))));
            var_19 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((-2147483641), (((/* implicit */int) (short)(-32767 - 1)))))), (((unsigned long long int) (short)-17288))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_8])) : (((/* implicit */int) arr_12 [i_0] [i_8]))))))))) : (var_9));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                for (int i_10 = 1; i_10 < 16; i_10 += 1) 
                {
                    {
                        arr_38 [i_8] [i_8] [4ULL] [i_10] = ((/* implicit */unsigned char) (~((-(((((/* implicit */_Bool) arr_25 [i_10 - 1] [i_9] [i_8] [i_0])) ? (arr_3 [15]) : (((/* implicit */unsigned long long int) arr_36 [i_8] [i_8] [i_10]))))))));
                        var_20 = ((/* implicit */int) ((((/* implicit */int) ((short) min((var_12), (arr_21 [i_8]))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)10528)), (-2147483640)))) < (arr_15 [i_0] [i_8] [i_9] [i_8] [i_8] [i_8]))))));
                        arr_39 [i_10] [i_8] [i_9] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-10506), (((/* implicit */short) (unsigned char)17)))))) & (((arr_26 [i_0] [i_8] [i_8] [i_10]) << (((var_2) - (17718222441295546723ULL))))));
                        arr_40 [i_8] [i_10 + 1] [i_10] [i_10 - 1] = min((min((arr_26 [i_10 - 1] [i_8] [i_8] [i_10 + 1]), (arr_26 [i_10 + 1] [i_8] [i_8] [i_10 + 1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0])))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_41 [i_0])) ? (((unsigned long long int) arr_42 [i_13] [i_12] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_22 [i_13] [i_8])) ? (var_9) : (var_2))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_12] [i_8])))));
                            arr_50 [i_11] [i_8] [i_8] [i_11] [i_8] [i_8] [i_0] = ((/* implicit */int) ((unsigned char) (+(((((/* implicit */int) (unsigned char)211)) + (((/* implicit */int) arr_48 [i_0] [i_8] [i_11] [i_8] [i_0])))))));
                            arr_51 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [6ULL] [i_13]))))), (min((arr_43 [i_0] [i_0] [i_12] [i_13]), (var_9))))))));
                        }
                    } 
                } 
                var_22 = (~((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_0] [i_8] [0ULL] [i_11] [i_8]))) : (var_14))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 2518379904152757360ULL)) ? (((/* implicit */int) (short)4363)) : (((/* implicit */int) arr_20 [i_11])))));
                    var_24 = ((((/* implicit */_Bool) arr_53 [i_0] [i_8] [i_14])) ? (3347446427169952900ULL) : (arr_53 [i_0] [i_8] [i_11]));
                }
                var_25 = ((/* implicit */unsigned char) (-(14329432482192875645ULL)));
                arr_55 [i_8] [i_8] [i_8] [i_11] = (((((!(((/* implicit */_Bool) arr_4 [i_0] [i_11] [i_11])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [2ULL] [15ULL])), (2326071278426269570ULL)))))) ? (min((arr_9 [i_11]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [14ULL] [i_11] [i_8] [i_11] [i_11])) && (((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_8] [i_8]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((4351454952639374442ULL) != (9381445795000555834ULL))))));
            }
        }
        arr_56 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) -2147483640));
        arr_57 [i_0] = ((/* implicit */int) var_4);
    }
    var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
    var_27 = ((/* implicit */short) var_15);
}
