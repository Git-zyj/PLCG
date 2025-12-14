/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93451
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] [(unsigned short)15] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) > (var_2))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)59100)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (unsigned char)240))));
            arr_9 [i_0] [i_1] [(_Bool)0] = ((/* implicit */unsigned char) ((5995668219864987745ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 3) /* same iter space */
                        {
                            arr_16 [i_0] [i_3] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned short) var_2);
                            arr_17 [i_3] [i_3] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) (~(-3371419799504384178LL)));
                        }
                        for (signed char i_5 = 2; i_5 < 16; i_5 += 3) /* same iter space */
                        {
                            arr_22 [i_0] [(signed char)10] [(signed char)15] [i_2] [i_3] = ((/* implicit */signed char) (+(((unsigned long long int) (signed char)-1))));
                            arr_23 [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)15125)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_2)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            arr_28 [i_0] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)204))));
                            arr_29 [i_0] [i_1] [i_1] [i_3] [i_3] [3LL] [i_6] = ((/* implicit */short) (signed char)-18);
                            arr_30 [i_1] [i_1] [i_2] [i_3] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60706)) ? (((/* implicit */int) ((short) var_13))) : (((/* implicit */int) (signed char)-11))));
                        }
                    }
                } 
            } 
            arr_31 [i_1] [i_0] = ((/* implicit */short) var_5);
        }
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            arr_34 [i_7] [i_0] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) | (((/* implicit */int) (unsigned short)4836))));
            arr_35 [i_0] [i_7] [i_7 + 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
        }
        arr_36 [i_0] = (unsigned short)50900;
        arr_37 [i_0] [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_0)))) % (((/* implicit */int) ((((/* implicit */_Bool) 4964509968742393368LL)) && (((/* implicit */_Bool) var_0)))))));
    }
    var_16 = ((/* implicit */unsigned short) var_14);
}
