/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6810
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
    var_11 = ((/* implicit */int) var_4);
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)254), ((unsigned char)246))))) : (var_6)))) ? (5ULL) : (((/* implicit */unsigned long long int) var_6))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_13 -= ((/* implicit */int) ((((((/* implicit */int) var_1)) + (((/* implicit */int) ((signed char) var_5))))) <= (((/* implicit */int) arr_0 [i_0]))));
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (signed char)-62))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_16 [(unsigned short)15] [13] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned int) ((int) var_6))) / (max((1087016698U), (((/* implicit */unsigned int) var_8)))))));
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)21734)), (arr_10 [i_0 + 1])))) ? (min((((/* implicit */unsigned int) var_1)), (2346439238U))) : (((/* implicit */unsigned int) (-(arr_10 [i_0 + 1])))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) var_4));
                }
            } 
        } 
        arr_18 [i_0] [i_0] = arr_4 [i_0] [i_0 + 1];
    }
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
        {
            var_16 -= ((/* implicit */int) ((long long int) min((((/* implicit */unsigned short) arr_14 [i_5])), ((unsigned short)65510))));
            arr_26 [i_5] = ((/* implicit */unsigned short) (((+(((long long int) -1210754709)))) + (((/* implicit */long long int) ((/* implicit */int) ((short) max(((unsigned char)253), (((/* implicit */unsigned char) arr_20 [i_5])))))))));
        }
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)4)) | (((/* implicit */int) (unsigned short)65535)))))))) >= (((/* implicit */int) (!(arr_0 [i_5]))))));
                            var_18 = ((/* implicit */unsigned int) (unsigned short)9260);
                            arr_37 [i_5] [i_5] [i_5] [i_5] [i_10] [i_7] [4U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_5] [i_7] [(short)10] [i_5])) > (arr_5 [i_5] [i_9] [i_10])));
                            arr_38 [i_5] [i_7] [i_8] [i_8] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [i_7] [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(arr_33 [i_10] [i_9] [i_5] [i_5] [i_5])))))))));
                        }
                    } 
                } 
            } 
            arr_39 [i_5] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((1210754708) * (((/* implicit */int) arr_0 [i_5]))))), ((+(-1LL)))));
        }
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (int i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                {
                    arr_45 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_4 [i_5] [i_5]), (arr_4 [i_5] [i_11])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5] [i_11])))))) : (max((arr_4 [i_5] [(short)13]), (arr_4 [i_5] [i_5])))));
                    arr_46 [i_5] [i_5] = ((/* implicit */signed char) -3201440789042418975LL);
                }
            } 
        } 
    }
    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) -1210754706))));
        /* LoopSeq 1 */
        for (int i_14 = 2; i_14 < 20; i_14 += 2) 
        {
            var_20 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)31)) && (((/* implicit */_Bool) (short)-1)))))));
            arr_53 [i_13] = max((((long long int) min((-1210754684), (arr_50 [i_13])))), (max((arr_51 [i_13] [i_13]), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)248))))))));
        }
    }
}
