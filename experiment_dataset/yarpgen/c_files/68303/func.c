/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68303
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
    var_10 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) ((arr_1 [i_0]) >= (((/* implicit */unsigned long long int) ((unsigned int) var_8)))));
        var_12 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)12]))) / (((((/* implicit */_Bool) arr_0 [(signed char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32748))) : (var_6)))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            var_13 = var_5;
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0]))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)4]))) != (arr_0 [i_0]))))));
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_1 - 1])) / (var_4)));
        }
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_15 = ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))) + (12762435042129169316ULL))) != (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) : (5684309031580382299ULL))))))) < (((((/* implicit */_Bool) -536870912)) ? (((/* implicit */long long int) var_5)) : ((-(1048575LL))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5684309031580382299ULL)) ? (1702935037) : (((/* implicit */int) arr_7 [i_2]))));
            arr_11 [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_2])) % ((-(((/* implicit */int) arr_7 [i_2]))))));
            var_17 = ((/* implicit */unsigned char) (+(((1702935037) >> (((((/* implicit */int) (short)32745)) - (32714)))))));
            var_18 = ((/* implicit */signed char) var_7);
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_8 [i_3])));
        }
        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        {
                            var_20 = ((((/* implicit */long long int) 1048575)) < ((+(((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4]))) | (151070287017037416LL))))));
                            var_21 = ((/* implicit */short) arr_15 [i_4]);
                        }
                    } 
                } 
            } 
            var_22 |= ((unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_4] [i_4]))) * (1048575LL)))));
            /* LoopSeq 1 */
            for (int i_8 = 2; i_8 < 18; i_8 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) ((_Bool) ((unsigned int) 536870886)));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11603))) != (17541860936893737506ULL)));
                    var_25 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */unsigned long long int) -1)) : (var_6))), (((/* implicit */unsigned long long int) var_3)))) | (((/* implicit */unsigned long long int) 764206219U))));
                }
                for (signed char i_10 = 1; i_10 < 19; i_10 += 2) 
                {
                    var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned short)65535)), (max((((/* implicit */unsigned long long int) arr_12 [i_10] [i_10 + 1])), ((+(var_6)))))));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) < (((/* implicit */int) arr_23 [i_2] [i_4] [i_10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))) : (((unsigned int) 4312050829619815652ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65521))) : ((-(4444403884855054714ULL)))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    var_28 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2] [i_4] [i_4] [i_4])) ? (var_6) : (((/* implicit */unsigned long long int) -1))))) ? (((unsigned long long int) 3587159811U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 5684309031580382299ULL)))))), (((/* implicit */unsigned long long int) ((signed char) arr_22 [i_2] [i_2] [i_2])))));
                    var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) arr_30 [i_2] [i_4] [i_4] [i_2])) : (((-1702935038) | (((/* implicit */int) (signed char)127)))))))));
                }
                arr_37 [i_2] [i_4] [i_4] [10U] = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (10U)));
                var_30 = ((/* implicit */unsigned char) 298405722);
            }
            var_31 = ((/* implicit */unsigned int) 1702935042);
        }
        for (unsigned long long int i_12 = 2; i_12 < 19; i_12 += 2) 
        {
            /* LoopNest 3 */
            for (short i_13 = 3; i_13 < 19; i_13 += 2) 
            {
                for (short i_14 = 1; i_14 < 19; i_14 += 1) 
                {
                    for (unsigned short i_15 = 3; i_15 < 19; i_15 += 1) 
                    {
                        {
                            var_32 *= ((/* implicit */unsigned int) 12762435042129169299ULL);
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((short) (unsigned char)236)))));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */unsigned short) (~(arr_29 [i_2] [i_12] [(_Bool)1] [i_12 - 2])));
            /* LoopSeq 1 */
            for (unsigned short i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                arr_52 [i_2] &= ((/* implicit */unsigned long long int) ((707807484U) != (((/* implicit */unsigned int) arr_18 [i_2] [i_2] [i_12 - 2] [i_2]))));
                var_35 = ((/* implicit */int) arr_8 [i_12]);
            }
            var_36 = var_4;
        }
        var_37 = ((/* implicit */unsigned long long int) ((var_5) | ((-(1373114972)))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_17 = 4; i_17 < 12; i_17 += 3) 
    {
        var_38 = ((/* implicit */unsigned long long int) (+(max((((((/* implicit */_Bool) arr_24 [i_17 - 1] [i_17 - 1] [i_17] [i_17])) ? (arr_12 [i_17] [i_17]) : (((/* implicit */int) arr_44 [i_17])))), (((/* implicit */int) var_9))))));
        var_39 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-3437)), ((unsigned short)22913)))), ((-(5684309031580382292ULL)))));
    }
}
