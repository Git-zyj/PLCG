/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72008
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
    var_19 = ((/* implicit */int) var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((((var_8) + (9223372036854775807LL))) << ((((+(((/* implicit */int) min(((unsigned short)31589), (((/* implicit */unsigned short) (unsigned char)140))))))) - (140))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) (signed char)-27))))) ? ((+(arr_0 [i_1]))) : (((((/* implicit */int) (unsigned short)33947)) - (((/* implicit */int) (unsigned short)33939))))));
                arr_9 [i_1] = ((/* implicit */long long int) var_10);
                arr_10 [i_0] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_2 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        arr_13 [i_2] = ((/* implicit */_Bool) (-((~(((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (arr_3 [i_2] [i_2])))))));
        arr_14 [(short)0] [i_2] = ((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned char)255))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    arr_21 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned int) ((int) arr_12 [i_4]))) : (((((/* implicit */unsigned int) ((332873581) ^ (((/* implicit */int) arr_16 [i_2] [i_2]))))) | (((((/* implicit */_Bool) -1215957783)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33946))) : (231945379U)))))));
                    arr_22 [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) arr_19 [i_3] [i_3]);
                }
            } 
        } 
    }
    for (unsigned char i_5 = 2; i_5 < 18; i_5 += 3) 
    {
        arr_26 [i_5] [(_Bool)1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((7039048468049322863ULL) != (((/* implicit */unsigned long long int) 1215957783))))), (arr_1 [(unsigned char)4] [(short)8])));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 3; i_7 < 18; i_7 += 3) 
            {
                for (int i_8 = 4; i_8 < 17; i_8 += 3) 
                {
                    {
                        arr_33 [i_6] [(unsigned char)7] [12] [i_6] = ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned short) max((arr_28 [i_7] [i_7 + 2]), (((/* implicit */short) (signed char)120))))), (min((arr_2 [i_6]), (((/* implicit */unsigned short) var_6)))))));
                        arr_34 [(signed char)18] [i_6] [(signed char)12] [2] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((arr_5 [i_5 + 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17331)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_8 + 1] [i_8 + 1] [i_8] [i_8])))))) : (((((/* implicit */_Bool) ((var_8) / (-5327625808910888011LL)))) ? (var_17) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)140)) ? (1215957783) : (((/* implicit */int) (unsigned short)33955)))))))));
                    }
                } 
            } 
        } 
    }
    var_20 = var_12;
}
