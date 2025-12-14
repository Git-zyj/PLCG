/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98124
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
    var_11 ^= var_10;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_12 -= ((/* implicit */unsigned char) ((arr_5 [4] [i_1] [i_2 + 1] [i_2 + 1]) > ((~(((/* implicit */int) (unsigned char)160))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */_Bool) 16U);
                        var_14 = ((/* implicit */unsigned int) 13459733624762348121ULL);
                    }
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        arr_11 [i_0] [i_4] [i_4] [2U] [i_4] [i_0] = ((((((-316706533) + (2147483647))) << (((((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(_Bool)1])) + (81))) - (17))))) + (((/* implicit */int) ((short) 13459733624762348121ULL))));
                        var_15 += ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_2] [i_4])) ? (13459733624762348095ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) << (((((((/* implicit */_Bool) (unsigned short)62368)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4] [(_Bool)1]))))) - (2356926309074170404LL)))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            arr_16 [i_0] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)28)))) ? (16343315871466474234ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_5] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_4 [i_0] [i_0])))) ? (((/* implicit */long long int) var_1)) : ((~(arr_8 [9] [9] [i_6] [0] [(_Bool)1])))));
                        }
                        arr_18 [10] [i_1] [i_0] [i_5] = (((~(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0]))));
                    }
                    arr_19 [i_0] [i_1] [(unsigned char)16] [i_2] = ((/* implicit */int) var_2);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                {
                    var_16 += ((/* implicit */short) 4987010448947203509ULL);
                    arr_26 [i_8] &= (!(((/* implicit */_Bool) arr_8 [i_0] [i_7] [10ULL] [i_8] [(_Bool)1])));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_9 = 2; i_9 < 21; i_9 += 4) 
    {
        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_11 = 2; i_11 < 21; i_11 += 4) 
                {
                    for (signed char i_12 = 1; i_12 < 21; i_12 += 4) 
                    {
                        {
                            arr_35 [i_11] [(unsigned char)6] [i_11 + 2] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4987010448947203509ULL)) ? (arr_32 [i_9] [i_10] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181)))))) ? (arr_27 [i_11 - 2] [i_11 - 1]) : (((/* implicit */unsigned long long int) max((arr_28 [(unsigned char)7]), (arr_28 [i_9]))))))) ? (((/* implicit */unsigned long long int) arr_34 [i_11 - 1] [i_11] [i_11 + 2] [i_11 + 1] [i_11 + 1])) : (920780959220072629ULL)));
                            arr_36 [i_9 + 1] [i_10] [i_11 - 1] [i_10] [i_11] = (-((~(var_4))));
                            var_17 += ((/* implicit */long long int) arr_32 [i_10] [i_10] [i_12]);
                        }
                    } 
                } 
                var_18 += ((/* implicit */signed char) arr_31 [6] [i_9]);
                arr_37 [(_Bool)1] [(_Bool)1] = ((/* implicit */int) ((arr_31 [i_9 - 2] [i_9 - 1]) ^ (arr_31 [(signed char)13] [i_9 + 2])));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)40252)) > (((/* implicit */int) (_Bool)1))));
    var_20 = ((((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) (short)28413)))) != (((/* implicit */int) (unsigned char)165)))))) / (((((long long int) (signed char)-22)) * (((/* implicit */long long int) (+(((/* implicit */int) var_5))))))));
}
