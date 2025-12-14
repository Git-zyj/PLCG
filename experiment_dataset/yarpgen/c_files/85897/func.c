/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85897
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
    var_15 = ((/* implicit */int) (short)25567);
    var_16 = ((/* implicit */long long int) var_3);
    var_17 = ((/* implicit */unsigned char) min((var_17), (((unsigned char) ((unsigned char) var_7)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_18 -= ((/* implicit */long long int) var_9);
                        /* LoopSeq 2 */
                        for (short i_4 = 2; i_4 < 22; i_4 += 1) /* same iter space */
                        {
                            var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (arr_0 [i_4 + 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) arr_3 [i_3 - 1]))));
                            var_20 = ((/* implicit */unsigned char) (-(7986434385306996115LL)));
                        }
                        for (short i_5 = 2; i_5 < 22; i_5 += 1) /* same iter space */
                        {
                            var_21 = ((((/* implicit */_Bool) (+(var_13)))) ? (((var_0) ? (var_9) : (((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) arr_15 [i_0] [22] [i_2] [i_3] [i_5 - 2])));
                            var_22 = ((/* implicit */unsigned char) var_7);
                        }
                        var_23 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (short)25565)) - (((/* implicit */int) arr_4 [i_0])))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_7 [i_1]))));
                            var_25 |= ((/* implicit */unsigned long long int) var_9);
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-25566))))) - (((unsigned long long int) var_6)))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_10 = 3; i_10 < 22; i_10 += 2) 
            {
                var_27 = ((/* implicit */unsigned int) arr_2 [i_10] [i_9]);
                var_28 = ((long long int) (short)25566);
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_10 - 2] [i_10 - 1] [i_10 + 1] [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 78232324U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32745)))))) : (arr_32 [i_0] [i_9] [(_Bool)1] [i_9])));
            }
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_9))) && (((/* implicit */_Bool) arr_6 [i_9]))));
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (-(((((/* implicit */_Bool) 258048)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25552))) : (2190319383U))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) ((int) arr_23 [i_0] [i_12]));
                            var_33 = ((((/* implicit */_Bool) (~(2829305977U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (4782923095801570204ULL));
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (~((+(1LL))))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) arr_20 [i_0] [i_0] [i_9] [i_11]))));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */_Bool) 3207501285U);
                            var_37 = ((/* implicit */_Bool) var_11);
                            var_38 -= ((/* implicit */unsigned long long int) -19LL);
                        }
                    } 
                } 
                var_39 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [i_0])) != (((/* implicit */int) arr_41 [i_0] [(_Bool)1] [i_0] [0] [i_9] [i_9] [i_11]))))) - ((-(((/* implicit */int) var_3))))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    for (signed char i_17 = 0; i_17 < 23; i_17 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-72))));
                            var_41 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) 375508547)) : (2190319383U))) >> (((/* implicit */int) var_3))));
                        }
                    } 
                } 
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 23; i_19 += 4) 
                {
                    for (int i_20 = 0; i_20 < 23; i_20 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */long long int) var_3);
                            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) 2305842992033824768ULL))));
                        }
                    } 
                } 
                var_44 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
                var_45 = ((/* implicit */int) min((var_45), (((((int) arr_15 [i_18] [i_9] [i_0] [i_0] [i_0])) - (((/* implicit */int) ((((/* implicit */int) arr_23 [i_0] [i_9])) <= (arr_46 [i_0] [i_9]))))))));
            }
        }
        for (long long int i_21 = 1; i_21 < 19; i_21 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_22 = 0; i_22 < 23; i_22 += 4) 
            {
                var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (var_8)))) ? ((~(var_4))) : (((/* implicit */unsigned long long int) ((1087466039U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                var_47 = ((/* implicit */int) ((var_0) && (((/* implicit */_Bool) arr_35 [i_21 + 4] [i_0] [(unsigned char)5]))));
            }
            for (unsigned int i_23 = 0; i_23 < 23; i_23 += 1) 
            {
                var_48 = ((/* implicit */unsigned long long int) var_0);
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 23; i_24 += 1) 
                {
                    for (unsigned long long int i_25 = 0; i_25 < 23; i_25 += 1) 
                    {
                        {
                            var_49 = ((/* implicit */signed char) ((unsigned int) (((_Bool)1) ? (arr_28 [i_0] [i_21 + 2] [i_21] [i_23] [i_23] [i_23] [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                            var_50 |= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_23 [i_24] [i_25])) || (((/* implicit */_Bool) -374968586)))));
                        }
                    } 
                } 
            }
            var_51 = ((/* implicit */unsigned short) arr_53 [i_21 + 1] [i_21 + 2] [i_21 + 3]);
        }
        var_52 = ((((/* implicit */_Bool) ((arr_33 [i_0] [(short)9] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_14)));
    }
}
