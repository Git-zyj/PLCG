/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7236
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
    var_11 = ((/* implicit */signed char) (short)-20555);
    var_12 |= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) ^ (var_7)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (2384551465U))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_13 |= 0ULL;
                arr_5 [5] [5] = ((/* implicit */short) (-(((/* implicit */int) var_8))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((((((/* implicit */_Bool) (+(-1)))) ? (((/* implicit */int) max((((/* implicit */short) arr_8 [i_2] [i_2])), ((short)510)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) arr_4 [i_2]))))))), ((+(((/* implicit */int) (unsigned short)65535)))))))));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((((-1287779213) + (2147483647))) << (((((/* implicit */int) arr_8 [i_2] [i_2])) - (14)))))))), (((((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_2] [i_2]), (arr_7 [i_2]))))) + ((~(arr_6 [i_2])))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 3; i_3 < 17; i_3 += 3) 
        {
            var_15 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)0)), (var_6)))), (((23ULL) + (((/* implicit */unsigned long long int) -2071485027))))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) (unsigned char)255)) : (-1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) : (min((arr_3 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) (unsigned char)154))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) min((arr_7 [i_2]), (((/* implicit */unsigned char) arr_10 [i_2] [i_3])))))))))))));
                var_17 = arr_8 [i_3 + 3] [i_3];
                var_18 |= ((/* implicit */int) min((((((/* implicit */unsigned long long int) var_5)) ^ (14131168322575707876ULL))), (((/* implicit */unsigned long long int) arr_6 [i_2]))));
            }
        }
        var_19 = ((/* implicit */unsigned char) (+((+(((((/* implicit */_Bool) 8219341599374831436ULL)) ? (((/* implicit */int) arr_10 [(unsigned short)12] [i_2])) : (((/* implicit */int) arr_11 [i_2]))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 3) 
        {
            arr_19 [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 9361337344283764615ULL)) ? (((/* implicit */int) arr_10 [i_6 - 1] [i_6])) : (((/* implicit */int) arr_10 [i_6 - 1] [i_6 - 1])))));
            var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */int) (!(((/* implicit */_Bool) max((2071485027), (0))))))) & (-1)))));
            var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((int) arr_3 [i_5] [i_5] [i_6 + 3])) <= (((/* implicit */int) ((unsigned char) arr_4 [i_6])))))), ((-(var_3)))));
            /* LoopSeq 4 */
            for (short i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                var_22 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) (signed char)-119)), (2800791489U))) ^ (((/* implicit */unsigned int) ((((2071485027) >= (0))) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_7] [i_6 + 3] [i_5] [i_5])) && (arr_10 [i_5] [i_6])))))))));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (var_3)));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (+(2517283692U))))) ? (((((/* implicit */_Bool) -148894916)) ? (((long long int) arr_4 [1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (2800791489U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6])))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((arr_10 [i_6] [i_7]) && (((/* implicit */_Bool) arr_16 [(signed char)9]))))))))));
                arr_22 [i_5] [i_6] [i_6] [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) max(((~(((/* implicit */int) arr_13 [i_5] [i_5])))), ((~(0)))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_6 [i_7])))))));
            }
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_9 = 2; i_9 < 13; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        {
                            arr_31 [i_5] [i_5] [i_5] [i_9] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min(((short)-20195), (((/* implicit */short) (unsigned char)102))))) ? (((/* implicit */unsigned int) ((int) (signed char)(-127 - 1)))) : (2251643682U))) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)59034)) + (83219973))))));
                            arr_32 [i_5] [i_5] [i_6] [i_6] [i_10] = 8219341599374831436ULL;
                            arr_33 [i_5] [i_6 + 3] [i_6] [i_9] [9U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9006924376834048ULL)) ? (max((3295392638U), (((/* implicit */unsigned int) arr_7 [i_6])))) : (max((((/* implicit */unsigned int) arr_15 [i_8])), (var_5)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_4)) <= (arr_24 [i_10] [i_6] [i_8] [i_6]))))) ^ (max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (17663660354657825313ULL))))) : (((/* implicit */unsigned long long int) 2222469944U))));
                        }
                    } 
                } 
                var_25 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_10 [i_6 + 2] [i_6 - 1]))))) & (min((arr_1 [i_6 - 2]), (((/* implicit */unsigned long long int) 55119195U))))));
            }
            for (unsigned int i_11 = 2; i_11 < 13; i_11 += 4) 
            {
                var_26 = ((/* implicit */unsigned int) (signed char)-1);
                arr_36 [i_5] [i_6] [i_6] = (unsigned short)56609;
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (arr_12 [i_11] [i_11 + 1] [i_6] [i_6])))) >= (min(((+(8219341599374831438ULL))), (((/* implicit */unsigned long long int) max((2222469944U), (127904517U)))))))))));
            }
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                arr_39 [i_6] [i_6 + 1] [i_6] = max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) min((arr_16 [6]), (arr_25 [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11162008987413368565ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) : (arr_0 [i_6 - 2] [i_6 + 1]))));
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_6])) >= (((int) arr_30 [i_5] [i_6 - 1] [i_6] [i_6 - 1] [i_12])))))));
                /* LoopNest 2 */
                for (long long int i_13 = 2; i_13 < 10; i_13 += 3) 
                {
                    for (short i_14 = 2; i_14 < 12; i_14 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)20194))));
                            var_30 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)-108), ((signed char)-108)))))))));
                            arr_46 [i_6] [i_6] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_47 [i_6] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 2497391959U)) >= (562915593682944ULL))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 14; i_15 += 1) 
                {
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        {
                            arr_52 [i_16] [i_6] [i_12] [i_12] [i_6] [(unsigned short)5] = ((/* implicit */short) (-(min((arr_3 [i_6] [i_6 - 1] [i_6 - 2]), (arr_3 [i_5] [i_6 - 1] [i_6 + 1])))));
                            var_31 |= ((/* implicit */short) ((((/* implicit */_Bool) 288230376151711743LL)) ? (((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (min((arr_21 [i_16] [i_15]), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)6502))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45801)))));
                        }
                    } 
                } 
            }
        }
        var_32 += ((/* implicit */unsigned int) (unsigned short)63380);
    }
}
