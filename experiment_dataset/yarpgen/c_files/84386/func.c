/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84386
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
    for (unsigned int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0 - 4] [i_0 - 4] = ((/* implicit */signed char) ((unsigned short) min((((((/* implicit */_Bool) 894990651U)) ? (1973933349) : (1973933349))), ((+(((/* implicit */int) var_3)))))));
        arr_5 [i_0] = ((/* implicit */signed char) (((_Bool)0) ? (332691574U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86)))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                arr_11 [i_2] = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (1670399380375638065ULL))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [i_0] [14] [i_0 - 4])) | (((/* implicit */int) arr_2 [i_0]))))) ^ ((~(arr_8 [i_0] [i_0] [i_0] [i_0 - 3])))));
                            var_11 = max(((signed char)-86), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [18ULL])) ? (var_7) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_4])))))))));
                        }
                    } 
                } 
            }
            var_12 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(arr_12 [i_0] [i_0] [9U] [i_0])))) ? (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1])) ? (1325811278) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_2 [i_0]))))));
        }
        var_13 = ((/* implicit */unsigned short) ((signed char) arr_15 [(short)9] [(short)9] [i_0] [i_0]));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 4; i_8 < 20; i_8 += 1) 
                    {
                        {
                            var_14 = max((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) (signed char)85)), (((((/* implicit */_Bool) 986833486)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))))));
                            var_15 = ((/* implicit */_Bool) max((((((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (_Bool)1))))) | (((/* implicit */int) max(((signed char)-24), ((signed char)75)))))), (120)));
                            arr_28 [i_0] [i_5] [i_5] [18] [i_5] [i_6] [i_5] = (signed char)78;
                            arr_29 [i_0] [i_5] [i_5] [i_6] [i_6] [i_6] [i_8 - 1] = ((/* implicit */unsigned char) (+(3693464737U)));
                            arr_30 [i_0] [i_5] [i_0] [i_5] [(_Bool)1] [i_5] = ((/* implicit */unsigned char) (unsigned short)10375);
                        }
                    } 
                } 
            } 
            arr_31 [i_5] [i_5] [i_0] = ((((/* implicit */_Bool) (+((~(((/* implicit */int) (signed char)100))))))) ? (min((arr_9 [i_0 - 3] [i_0] [i_0 - 1]), (arr_9 [i_0 - 3] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((arr_22 [(signed char)18] [i_0 + 4] [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))));
        }
    }
    /* LoopNest 3 */
    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                {
                    arr_38 [i_10] [i_10] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) (_Bool)0)))));
                    arr_39 [i_10] [i_10] = ((/* implicit */unsigned short) ((int) 2620617160U));
                }
            } 
        } 
    } 
}
