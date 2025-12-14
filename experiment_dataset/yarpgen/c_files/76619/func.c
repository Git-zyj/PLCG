/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76619
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) ? (((/* implicit */int) (short)-32632)) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) (short)32632)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))), (((/* implicit */int) min((((/* implicit */short) arr_1 [i_1] [i_0])), (arr_0 [i_0]))))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_13 = (~(3507757309U));
                                var_14 = ((/* implicit */signed char) ((long long int) (short)32623));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_6)));
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                {
                    var_16 = arr_13 [i_6];
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_19 [i_5] [i_5] [i_5]))) ? ((~(((/* implicit */int) min(((short)21427), ((short)32632)))))) : (((/* implicit */int) var_2)))))));
                }
            } 
        } 
        arr_21 [i_5] [1LL] = max((((/* implicit */unsigned long long int) ((unsigned char) arr_13 [i_5]))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32632)) ? (((/* implicit */int) (short)-15381)) : (((/* implicit */int) var_2))))), (max((((/* implicit */unsigned long long int) arr_18 [(signed char)5] [(signed char)5])), (arr_14 [(unsigned char)1] [14ULL]))))));
    }
    var_18 = ((/* implicit */unsigned int) (-(var_6)));
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        for (short i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_10 = 2; i_10 < 20; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            {
                                arr_33 [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 1] [i_12] = ((/* implicit */short) ((long long int) arr_26 [i_8]));
                                var_19 -= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_17 [i_10 - 2]))))));
                                arr_34 [i_8] [i_11] [i_12] [i_11] [17ULL] [i_11] [7ULL] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((unsigned int) arr_25 [i_9]))) + (max((10700669757649836213ULL), (((/* implicit */unsigned long long int) var_12)))))), (((((/* implicit */_Bool) -2115052775)) ? (min((((/* implicit */unsigned long long int) (signed char)-45)), (arr_13 [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9] [i_10 - 1] [i_9])))))));
                                arr_35 [i_8] [i_8] [i_12] [i_9] [i_10] [i_10] [i_12] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_23 [i_8] [i_8])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_23 [i_8] [i_12]))))));
                                arr_36 [i_8] [i_12] [i_11] [4U] = max((((/* implicit */unsigned short) (short)1342)), ((unsigned short)21));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_29 [i_9])) ? (((/* implicit */int) arr_29 [i_9])) : (((/* implicit */int) arr_29 [i_9]))))));
                /* LoopNest 3 */
                for (unsigned int i_13 = 2; i_13 < 21; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 3; i_14 < 19; i_14 += 3) 
                    {
                        for (int i_15 = 0; i_15 < 22; i_15 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((int) (-(-297467734))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) arr_17 [i_9])) : (((/* implicit */int) arr_25 [i_15]))))), (((unsigned long long int) arr_41 [(unsigned char)18] [i_9] [i_13 - 1] [i_14])))))))));
                                arr_45 [i_13 - 1] [i_9] [i_13 - 1] [i_15] [i_9] &= ((/* implicit */unsigned int) ((unsigned char) (~(((unsigned int) -8757980670349230350LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    arr_49 [i_8] [(_Bool)1] [i_8] [(_Bool)1] = ((/* implicit */unsigned char) max((((unsigned long long int) min((((/* implicit */long long int) arr_25 [i_8])), (arr_46 [i_9] [i_9])))), (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)0)))));
                    arr_50 [i_16] [i_9] = ((/* implicit */unsigned short) (!(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_8] [i_8] [i_8] [i_16] [i_8])) ? (((/* implicit */int) arr_44 [i_8] [i_8] [i_8] [21LL] [i_16] [i_16] [i_16])) : (((/* implicit */int) arr_12 [i_16]))))) != (((long long int) var_6))))));
                    arr_51 [10ULL] [(_Bool)1] [i_16] [(short)16] = ((/* implicit */_Bool) max((((/* implicit */int) arr_17 [i_9])), (((((/* implicit */_Bool) ((short) arr_48 [i_8] [i_9] [i_16]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_8] [i_16]))))) : (((/* implicit */int) var_1))))));
                }
                arr_52 [(signed char)4] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) % (((/* implicit */int) ((unsigned short) ((unsigned short) arr_46 [i_8] [i_9]))))));
            }
        } 
    } 
}
