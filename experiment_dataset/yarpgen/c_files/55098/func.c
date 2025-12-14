/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55098
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
    var_12 &= ((/* implicit */_Bool) (+(max((((/* implicit */int) var_2)), (((int) var_10))))));
    var_13 -= (signed char)0;
    var_14 ^= ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 769275780901272141LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_2 [i_0]))))) : (((/* implicit */int) arr_2 [i_0 + 1])))) >> (((((((/* implicit */int) var_2)) & (((/* implicit */int) ((signed char) (unsigned short)99))))) - (79)))));
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 7063036058405731150LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) : (arr_3 [(short)9] [(_Bool)1]))))) ? (((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))))))))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((536870911), (((/* implicit */int) (unsigned short)65451))))) && (((((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) : (var_4))) <= (arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 2])))));
                        var_17 ^= ((((((/* implicit */int) var_6)) << (((arr_8 [(short)7] [i_0 - 2] [i_0 - 2] [i_0 - 2]) - (14601023245466057736ULL))))) * ((-(((/* implicit */int) (signed char)-86)))));
                    }
                } 
            } 
            arr_10 [i_0] [i_0 + 1] [i_1 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) arr_2 [i_1 - 1])) & (((/* implicit */int) arr_2 [i_1 + 1])))) : (((/* implicit */int) (short)8191))));
            arr_11 [i_1] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)65435)) : (((/* implicit */int) (unsigned char)209))))), (min((var_1), (((/* implicit */unsigned long long int) (unsigned char)231)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)105), ((unsigned char)254)))))));
        }
        var_18 -= max((((/* implicit */int) (_Bool)1)), (-1891858954));
        arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) (short)-6328))))) || (((((/* implicit */int) ((_Bool) (unsigned short)12503))) <= (arr_9 [i_0 - 2] [i_0 - 2] [i_0 + 1] [1U] [i_0 - 1])))));
    }
    /* vectorizable */
    for (long long int i_4 = 4; i_4 < 7; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */long long int) ((((11273306602003159075ULL) | (13281941897778634108ULL))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (14350278457743376341ULL)))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1012155849882427827ULL)) ? (637918760U) : (637918743U)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) var_9)) | (((/* implicit */int) var_0))))));
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_4]))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_5]))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)59))))) || (((/* implicit */_Bool) ((long long int) 3404217543894255051ULL)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                for (short i_9 = 3; i_9 < 9; i_9 += 4) 
                {
                    {
                        arr_31 [(_Bool)1] [i_7] [i_8] [i_9 - 2] [i_9] = ((/* implicit */short) var_2);
                        var_22 -= ((/* implicit */signed char) ((unsigned char) arr_22 [i_4 + 4] [i_7 - 1] [i_9 + 2]));
                        arr_32 [10LL] [i_7] [i_7] [i_7] [(short)1] = ((/* implicit */signed char) ((unsigned short) (unsigned short)65418));
                        arr_33 [i_4] [i_7 - 1] [i_7] [i_4] [i_9] [i_7] = ((/* implicit */unsigned int) var_8);
                    }
                } 
            } 
        } 
    }
}
