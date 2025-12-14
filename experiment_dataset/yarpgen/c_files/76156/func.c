/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76156
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
    var_20 = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) var_9)), (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_19))))), (((((/* implicit */_Bool) ((int) (unsigned char)82))) ? (((((/* implicit */_Bool) (unsigned short)33292)) ? (var_11) : (var_15))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            var_21 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (short)21156)) && (((/* implicit */_Bool) (short)23658))))), ((-(((/* implicit */int) arr_4 [i_1] [i_1 + 2]))))));
            var_22 += ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (((/* implicit */int) (unsigned short)32252)) : (((/* implicit */int) var_13))))));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_23 = ((/* implicit */signed char) (((((+(((/* implicit */int) var_13)))) + (2147483647))) << (((min((((/* implicit */int) var_4)), ((+(((/* implicit */int) (signed char)27)))))) - (27)))));
            /* LoopSeq 2 */
            for (signed char i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                var_24 = ((/* implicit */unsigned char) min((((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_18))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_1 [13LL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))))))));
                var_25 = ((/* implicit */signed char) var_5);
                var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))) | ((-(arr_10 [i_0 + 1] [i_0])))));
                var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_3 + 4] [i_3 + 3] [i_3 + 3]))))), ((unsigned short)65535)));
            }
            for (int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                var_28 = ((/* implicit */unsigned int) 541931879970256390ULL);
                var_29 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 2] [i_4] [i_4])) ? (arr_12 [i_0] [i_0 - 1] [i_4] [i_4]) : (arr_12 [i_0 - 2] [i_0 - 3] [i_4] [i_2])))) ? ((-(arr_12 [i_0 + 2] [i_0 - 3] [i_0 - 3] [i_0 - 3]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (arr_12 [i_0] [i_0 - 2] [i_4] [(unsigned char)21]))));
                var_30 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [(signed char)0])) ? (((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) min((var_3), (var_12)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_4]))) : (var_19)))))));
                var_31 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? (var_8) : ((-(((/* implicit */int) var_4))))))));
            }
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_6 [i_0 - 2]), (arr_6 [i_0 - 2])))) ? (((((/* implicit */_Bool) max((arr_4 [i_0] [i_2]), (((/* implicit */unsigned char) arr_0 [i_0]))))) ? (arr_12 [(_Bool)0] [i_2] [i_2] [i_2]) : (min((var_1), (((/* implicit */unsigned int) var_0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((_Bool) var_15)))))));
            var_33 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned char)58)), ((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
        }
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    {
                        arr_22 [i_0] [i_0] [i_6] [i_6] = var_10;
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_5] [(short)9] [i_5])))))) + ((~(5976499517854629030ULL))))) : (((((/* implicit */_Bool) ((arr_12 [i_0] [i_5] [i_6] [i_6]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_0])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) (short)-21778)) ? (5976499517854629030ULL) : (7004190964509450311ULL)))))));
                        arr_23 [i_0] [i_5] [i_6] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 3]))) : (arr_17 [i_5] [i_0 + 1] [i_6])))));
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned char)188))))))))));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((72057576858058752LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29284)))))) ? (((((/* implicit */_Bool) ((4044360557684078509ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_0 + 2])))) : (((/* implicit */int) arr_9 [i_0 - 2] [i_5] [i_5])))) : (((arr_19 [i_0]) ? (((/* implicit */int) ((signed char) var_12))) : (((((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))))))));
            arr_24 [i_0] = ((/* implicit */long long int) max((((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_12))) || (((/* implicit */_Bool) var_3))))), (arr_2 [(unsigned char)10])));
            var_37 = ((/* implicit */long long int) (~(var_1)));
        }
        for (short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 1; i_9 < 21; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 3; i_10 < 21; i_10 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            arr_37 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (var_15)))))));
                            var_38 -= ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_28 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_8] [i_9 - 1])) ? (var_19) : (var_19)))) ? (-7LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_11] [i_11] [i_9] [i_10])))))))));
                        }
                        arr_38 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))));
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((303172255608896087LL), (((/* implicit */long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) << (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0])))))) ? (((/* implicit */int) min((max((((/* implicit */unsigned short) arr_29 [i_0] [i_0] [i_0] [i_0])), (var_14))), (((/* implicit */unsigned short) arr_8 [i_0] [i_0 - 3] [i_0 - 3]))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_8))))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) 1060812128U)) > (arr_17 [i_0] [i_0] [i_0])))))))));
            var_40 += ((/* implicit */int) min((var_4), (((/* implicit */signed char) ((min((var_19), (((/* implicit */long long int) var_16)))) > (((/* implicit */long long int) arr_10 [i_0 + 2] [12LL])))))));
        }
        arr_39 [i_0] [i_0] = ((/* implicit */unsigned short) (-((+(((var_1) << (((((/* implicit */int) arr_16 [i_0] [i_0] [i_0])) - (9768)))))))));
        var_41 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_35 [i_0 - 3] [i_0 - 3] [i_0] [i_0 + 1] [i_0 + 1])) : ((+(((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 3; i_12 < 20; i_12 += 3) /* same iter space */
    {
        var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [8LL] [i_12 - 3] [i_12 + 2])) ? (((/* implicit */long long int) var_1)) : (var_17))))));
        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)34)))))));
    }
    for (unsigned char i_13 = 3; i_13 < 20; i_13 += 3) /* same iter space */
    {
        arr_46 [i_13] [i_13 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(arr_15 [i_13 - 2] [8U] [8U])))) << (((arr_31 [(short)20] [i_13] [i_13] [i_13]) + (570331167957419487LL)))));
        arr_47 [i_13] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        var_44 = ((/* implicit */long long int) arr_26 [i_13] [i_13]);
    }
    for (unsigned char i_14 = 3; i_14 < 20; i_14 += 3) /* same iter space */
    {
        var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((12470244555854922603ULL), (((/* implicit */unsigned long long int) arr_4 [i_14 + 2] [i_14]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_14])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_14] [i_14 + 1] [i_14 + 1] [i_14])))))) ? (max((-72057576858058753LL), (((/* implicit */long long int) 1521077140U)))) : (((((/* implicit */_Bool) arr_17 [i_14 - 2] [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-1LL)))))));
        var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) 2773890160U)))))) && (arr_15 [i_14] [6] [i_14 - 3]))))));
        var_47 = ((/* implicit */signed char) (((_Bool)1) ? (0U) : (1521077135U)));
    }
    var_48 = ((/* implicit */unsigned char) (~((((_Bool)1) ? (((((/* implicit */int) var_18)) / (var_8))) : ((-(((/* implicit */int) var_14))))))));
}
