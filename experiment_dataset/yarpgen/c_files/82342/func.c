/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82342
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_5))) ? (max((((/* implicit */long long int) (short)(-32767 - 1))), (var_18))) : (((((/* implicit */long long int) arr_0 [(short)8] [i_0])) & (1970374399004771792LL)))))) ^ ((~(((arr_1 [(signed char)4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (~((-(((arr_3 [(short)3] [i_1] [i_1]) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) 8126464))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */short) max((min(((-(arr_8 [i_1] [i_2]))), (((/* implicit */unsigned long long int) ((signed char) (unsigned char)228))))), (min((min((((/* implicit */unsigned long long int) (unsigned char)21)), (18446744073709551615ULL))), (((((/* implicit */_Bool) arr_5 [i_2 - 1])) ? (0ULL) : (arr_8 [i_2] [i_3])))))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((unsigned short) (+(arr_9 [i_1] [i_2 + 1] [i_2 - 1] [i_2 - 1])))))));
                        var_22 = ((/* implicit */short) (~(((arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ^ (((((/* implicit */_Bool) -1970374399004771802LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_12 [i_0] [i_1] [i_2] [i_3])))))));
                        var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_3 [(short)14] [i_2 - 1] [i_2 + 1]))) ? ((+(((/* implicit */int) var_0)))) : (((int) arr_3 [i_2 - 1] [i_2] [i_2 - 1]))));
                        arr_13 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((var_17) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15))))))), (min((((/* implicit */unsigned long long int) var_15)), (((arr_10 [i_3] [(_Bool)1] [i_2 - 1] [i_1] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) arr_4 [i_0])))));
            var_25 = ((/* implicit */unsigned int) ((unsigned long long int) arr_1 [3U]));
        }
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */long long int) var_7);
            var_27 -= ((/* implicit */short) ((_Bool) (~(((/* implicit */int) arr_4 [i_0])))));
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) max(((-9223372036854775807LL - 1LL)), (-1970374399004771805LL))))));
            var_29 = ((/* implicit */unsigned short) max((((((var_3) & (((/* implicit */long long int) 3568688790U)))) | (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4]))))), (((/* implicit */long long int) arr_3 [i_0] [i_0] [(short)10]))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) 3549685343U)) ? (((/* implicit */int) (unsigned short)20554)) : (((/* implicit */int) (short)-24107))));
            arr_18 [(short)15] [(short)15] |= ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned short)4)) << (((((/* implicit */int) var_13)) + (16)))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                for (signed char i_8 = 2; i_8 < 19; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 1; i_9 < 19; i_9 += 1) 
                        {
                            arr_28 [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) | (1970374399004771804LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) 4194303ULL)))))))));
                            arr_29 [i_6] [i_0] = ((/* implicit */int) ((long long int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_26 [i_8 + 1] [i_9] [i_9] [i_9 + 1] [i_9 - 1] [i_9] [i_9])))));
                        }
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_8] [(short)4] [(short)4])) & (((/* implicit */int) (unsigned char)39))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_1 [i_8 + 1]))))))));
                        var_33 = ((/* implicit */long long int) ((short) min((((/* implicit */short) arr_23 [i_0] [i_0] [i_0] [i_7] [i_7] [i_8 + 1])), (arr_5 [i_8 - 2]))));
                        var_34 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_19)) & (var_5)))));
                    }
                } 
            } 
            arr_30 [i_0] |= ((/* implicit */short) (((_Bool)1) ? (min((((((/* implicit */_Bool) arr_12 [i_0] [i_6] [i_6] [4ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_10 [i_0] [i_0] [i_6] [i_6] [i_6]))), (((/* implicit */unsigned long long int) (+(arr_26 [i_0] [i_6] [i_6] [i_6] [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)25)) ? (-8331580227609114124LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) (unsigned char)12)))))));
            arr_31 [i_6] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_6]);
        }
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [(_Bool)1] [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */int) ((-4513648320972350815LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))))) % (((((/* implicit */int) (signed char)120)) % (((/* implicit */int) arr_14 [i_0])))))) : (((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned char)6)))))))))));
    }
    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        var_36 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) max((var_7), (((/* implicit */short) arr_23 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))) >= ((-(((/* implicit */int) (unsigned char)255))))))), ((~(((var_15) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) (unsigned short)29295))))))));
        var_37 = ((((/* implicit */_Bool) 0U)) ? (2359012773618667921ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))));
        arr_34 [i_10] [i_10] = ((/* implicit */int) ((unsigned char) max((arr_12 [i_10] [i_10] [i_10] [i_10]), (((/* implicit */long long int) var_1)))));
    }
    for (long long int i_11 = 0; i_11 < 20; i_11 += 1) 
    {
        arr_38 [i_11] = ((/* implicit */unsigned long long int) (~(((unsigned int) -472646833))));
        arr_39 [i_11] = ((((((/* implicit */_Bool) arr_5 [i_11])) ? (((/* implicit */int) arr_24 [i_11] [i_11] [(short)8] [i_11] [i_11])) : (((/* implicit */int) arr_5 [i_11])))) ^ (((/* implicit */int) max((arr_21 [i_11] [i_11] [i_11]), (arr_25 [i_11] [i_11] [i_11] [i_11])))));
        var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) + (((/* implicit */int) max((((/* implicit */short) var_13)), (arr_17 [i_11] [i_11]))))));
        var_39 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)19))));
    }
    var_40 = ((/* implicit */unsigned char) (~(-4513648320972350815LL)));
    var_41 = ((/* implicit */unsigned int) ((var_17) ? (max(((+(var_18))), (((/* implicit */long long int) max((var_14), (((/* implicit */unsigned int) (short)7016))))))) : (((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_2)))), ((+(((/* implicit */int) (_Bool)1)))))))));
    var_42 = ((/* implicit */long long int) ((unsigned short) 280949767));
}
