/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67843
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [0ULL] &= ((/* implicit */short) var_8);
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 3; i_1 < 6; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                var_12 -= ((/* implicit */short) ((((((/* implicit */int) var_11)) >= (643838885))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)110))));
                var_13 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (17460150708020415160ULL))) | (((986593365689136464ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((var_0) > (((/* implicit */int) var_4)))))));
            }
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (short)-6362))));
            arr_7 [(short)4] |= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_5)))))) <= (((((/* implicit */_Bool) 4836756983337148412ULL)) ? (17460150708020415174ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
        }
        for (unsigned long long int i_3 = 3; i_3 < 6; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                arr_15 [i_0] = ((/* implicit */signed char) (~(var_1)));
                arr_16 [i_0] [(short)0] [i_3] [(short)0] &= 1360081220420491342ULL;
            }
            for (short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                arr_20 [i_0] [i_0] [i_0] [4U] = ((/* implicit */int) (short)32767);
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_5] [i_6] [(signed char)5] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 458587955138561281ULL))))), (max((((((/* implicit */unsigned long long int) 415656121)) & (17086662853289060274ULL))), (((/* implicit */unsigned long long int) (short)-12560))))));
                        var_16 = var_4;
                    }
                    arr_28 [i_6] [i_6] [i_0] [i_5] [i_6] [i_6] = ((/* implicit */short) 2147483647);
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)11009)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)23178)) ? (415656114) : (2147483647)))))) : (17460150708020415138ULL)));
                }
                for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 1) 
                {
                    var_18 = ((/* implicit */int) max((var_18), (((-415656120) ^ (478013282)))));
                    var_19 ^= ((/* implicit */unsigned long long int) (((!(((((/* implicit */unsigned int) var_0)) < (4234662423U))))) || (((/* implicit */_Bool) (~((+(var_3))))))));
                }
            }
            var_20 = ((/* implicit */short) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32756)) || (((/* implicit */_Bool) (signed char)127))))), (((((/* implicit */_Bool) 986593365689136474ULL)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (3731511351U))))), (((/* implicit */unsigned int) 415656120))));
            arr_31 [i_0] [i_0] [i_3 + 1] = ((/* implicit */int) ((((/* implicit */int) (short)-6570)) == (2147483625)));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 3; i_9 < 6; i_9 += 3) /* same iter space */
        {
            arr_34 [i_0] [i_9] [i_0] = ((/* implicit */unsigned long long int) var_4);
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                var_21 -= ((/* implicit */signed char) (-(((/* implicit */int) (short)-13452))));
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 8; i_12 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) ^ (17460150708020415181ULL))))));
                            arr_42 [i_11] [i_11] [i_11] [i_11] [8] [i_11] [i_11] |= ((/* implicit */short) (+(((17460150708020415146ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12601)))))));
                        }
                    } 
                } 
            }
            var_23 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (var_1));
        }
        for (unsigned long long int i_13 = 3; i_13 < 6; i_13 += 3) /* same iter space */
        {
            arr_45 [i_0] [i_13] = ((/* implicit */short) var_8);
            /* LoopNest 3 */
            for (short i_14 = 0; i_14 < 10; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    for (int i_16 = 3; i_16 < 8; i_16 += 4) 
                    {
                        {
                            var_24 += ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-32763)), (min((var_6), (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) (short)-32749)))))))));
                            var_25 = ((/* implicit */unsigned int) min((((((/* implicit */int) ((((/* implicit */_Bool) 17460150708020415162ULL)) || (((/* implicit */_Bool) 45370352U))))) % (((/* implicit */int) ((((/* implicit */_Bool) 1428750544)) || (((/* implicit */_Bool) var_1))))))), (((((((/* implicit */_Bool) 17670254869169100139ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_4)))) & (var_6)))));
                            var_26 |= ((15605944360011744871ULL) % (min((((/* implicit */unsigned long long int) (short)32760)), (((((/* implicit */_Bool) (short)-29727)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12593))) : (0ULL))))));
                        }
                    } 
                } 
            } 
            arr_54 [i_0] [i_0] [i_0] = ((((((((/* implicit */int) var_2)) & (((/* implicit */int) var_5)))) + (2147483647))) << (((((((((/* implicit */int) var_5)) + (2147483647))) >> (0U))) - (2147483616))));
            arr_55 [i_0] [i_13] [i_0] = ((((/* implicit */_Bool) (~(703698627)))) ? (min((13017361961190440547ULL), (((/* implicit */unsigned long long int) (short)31212)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)302), ((short)18650))))));
        }
    }
    var_27 ^= ((/* implicit */int) (short)610);
}
