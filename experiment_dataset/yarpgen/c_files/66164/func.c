/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66164
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */signed char) min(((-(2287828610704211968ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (var_3))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-(min((((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), (arr_2 [2] [i_1])))), (max((((/* implicit */unsigned long long int) (unsigned short)4095)), (var_15))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_20 &= ((/* implicit */int) max((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 18158513697557839872ULL)))))))), (min((var_3), (min((((/* implicit */long long int) (short)-13485)), (arr_4 [i_2])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_3 = 1; i_3 < 10; i_3 += 3) 
        {
            var_21 &= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(short)1] [i_3])))))));
            /* LoopSeq 3 */
            for (short i_4 = 1; i_4 < 9; i_4 += 2) 
            {
                arr_11 [i_4] [i_3 + 1] [i_2] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)146))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (-(((/* implicit */int) (short)26665)))))));
            }
            for (short i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
            {
                arr_14 [i_5] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_5] [i_3 + 1] [i_5]))));
                arr_15 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_3 + 1] [i_5]))));
            }
            for (short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
            {
                arr_18 [i_2] [(short)7] [i_6] = ((/* implicit */unsigned char) (+(var_3)));
                var_23 = ((/* implicit */unsigned char) (+((~(4718251217096119110ULL)))));
                arr_19 [i_6] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                var_24 &= ((/* implicit */short) (+(-436294613605211943LL)));
                arr_20 [i_2] [i_3] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (short)27807))));
            }
            /* LoopSeq 1 */
            for (short i_7 = 3; i_7 < 10; i_7 += 1) 
            {
                arr_23 [i_2] [i_2] [(unsigned short)6] &= ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [18LL] [18LL]))));
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned char)24)))))))));
                var_26 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_7 + 1] [i_3 + 1]))));
                arr_24 [i_2] [i_2] [i_2] [8] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [(short)0] [i_7 - 3] [i_7 - 1]))));
            }
            var_27 |= (-(((/* implicit */int) (signed char)0)));
            arr_25 [i_2] [i_3 + 1] [i_2] = (-(arr_4 [i_3 - 1]));
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            arr_29 [i_2] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_28 [i_2] [i_8] [i_2]))));
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (-(arr_1 [i_8]))))));
            var_29 = ((/* implicit */short) (~(var_1)));
        }
        for (int i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            arr_32 [(short)2] &= ((/* implicit */signed char) (+(max((((/* implicit */int) (!(((/* implicit */_Bool) (short)27820))))), ((~(((/* implicit */int) var_6))))))));
            var_30 += ((/* implicit */short) max((((/* implicit */long long int) min((min((((/* implicit */short) var_7)), (var_8))), (((/* implicit */short) arr_22 [i_9] [0] [0] [i_2]))))), ((-(var_4)))));
        }
        var_31 &= max(((short)2047), ((short)17060));
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)7340))))))))))));
    }
}
