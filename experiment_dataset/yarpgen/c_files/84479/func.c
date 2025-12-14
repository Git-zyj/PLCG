/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84479
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) max((var_11), (max(((short)-13154), ((short)13162)))));
        var_12 ^= ((/* implicit */signed char) (+(((/* implicit */int) (short)-29942))));
        var_13 += min((max((max(((unsigned short)17404), (((/* implicit */unsigned short) (short)(-32767 - 1))))), (((/* implicit */unsigned short) (short)-13163)))), (((/* implicit */unsigned short) (unsigned char)31)));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_14 += ((/* implicit */unsigned int) (unsigned char)6);
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (short)-29958))));
                        var_16 += ((/* implicit */int) (!(((/* implicit */_Bool) max((max((4836118742730665145LL), (((/* implicit */long long int) (short)7644)))), (((/* implicit */long long int) (+(((/* implicit */int) (short)13170))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            var_17 += ((/* implicit */unsigned short) (~((~(((/* implicit */int) (short)13164))))));
            var_18 |= ((/* implicit */unsigned int) (short)28017);
        }
        for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_6 = 1; i_6 < 23; i_6 += 1) /* same iter space */
            {
                var_19 *= ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) min(((unsigned char)250), (((/* implicit */unsigned char) (signed char)-36))))))), (((/* implicit */int) max((((/* implicit */short) max(((unsigned char)18), (((/* implicit */unsigned char) (_Bool)1))))), ((short)8263))))));
                /* LoopSeq 3 */
                for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    var_20 *= min((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (short)-13181))))))), (max((min((11849658092716838279ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (unsigned char)84)))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((((/* implicit */unsigned long long int) -91868441)), (134217712ULL))))));
                }
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) 7749203417711903139LL))));
                    arr_24 [i_0] [i_5] [i_0] [i_8] |= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)29933)), (402451449U)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_23 *= ((/* implicit */short) max(((-(((/* implicit */int) max(((short)-764), ((short)-13140)))))), (((/* implicit */int) (_Bool)1))));
                        var_24 &= ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)241))))));
                        var_25 += ((/* implicit */unsigned short) -465002433);
                        var_26 += ((/* implicit */long long int) (_Bool)1);
                    }
                    arr_28 [i_0] [i_5] [i_0] [i_8] [i_0] |= ((/* implicit */_Bool) (-(min(((+(((/* implicit */int) (unsigned char)63)))), (((/* implicit */int) (short)3776))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        var_27 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                        var_28 += ((/* implicit */unsigned long long int) (~((~(3892515846U)))));
                    }
                }
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                {
                    var_29 += (short)-29942;
                    var_30 *= ((/* implicit */unsigned int) -5762321431376937349LL);
                    var_31 |= ((/* implicit */signed char) (short)-12291);
                    var_32 |= ((/* implicit */int) min((((/* implicit */unsigned int) min(((~(((/* implicit */int) (short)-13126)))), (((/* implicit */int) max(((short)780), (((/* implicit */short) (unsigned char)250)))))))), ((+(max((((/* implicit */unsigned int) 4194303)), (3892515868U)))))));
                }
                arr_33 [i_5] [i_5] [i_0] &= ((/* implicit */short) max((982715977220674148ULL), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (short)29942)))), ((~(((/* implicit */int) (short)28943)))))))));
            }
            /* vectorizable */
            for (signed char i_12 = 1; i_12 < 23; i_12 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */int) (signed char)111);
                var_34 = ((/* implicit */_Bool) max((var_34), ((!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)6)))))))));
                /* LoopSeq 2 */
                for (short i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
                {
                    var_35 += ((/* implicit */short) 10436215297651131108ULL);
                    var_36 |= (+((+(((/* implicit */int) (short)-3337)))));
                    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (-(((/* implicit */int) (short)-1024)))))));
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        arr_43 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_5] |= ((/* implicit */unsigned int) 144115188075593728ULL);
                        var_38 += (signed char)8;
                    }
                    for (unsigned short i_15 = 4; i_15 < 20; i_15 += 1) 
                    {
                        var_39 = ((/* implicit */int) 8653721865217930931ULL);
                        arr_48 [i_0] [i_13] [i_12] [i_12] |= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                    }
                }
                for (short i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 3; i_17 < 23; i_17 += 3) 
                    {
                        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (signed char)124))));
                        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) -2316338916048506399LL))));
                    }
                    var_42 ^= ((/* implicit */long long int) (~((+(((/* implicit */int) (_Bool)0))))));
                }
            }
            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) 2316338916048506405LL))));
            arr_53 [i_0] |= ((/* implicit */_Bool) (+((-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-4))))))));
            var_44 += max((16776704ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)32))))));
        }
        for (short i_18 = 0; i_18 < 24; i_18 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_19 = 0; i_19 < 24; i_19 += 1) 
            {
                for (int i_20 = 1; i_20 < 22; i_20 += 3) 
                {
                    {
                        var_45 *= ((/* implicit */unsigned long long int) (signed char)6);
                        arr_63 [i_0] [20U] [i_19] &= ((/* implicit */unsigned long long int) (short)16342);
                        var_46 ^= ((/* implicit */int) (short)-9388);
                        /* LoopSeq 1 */
                        for (int i_21 = 0; i_21 < 24; i_21 += 1) 
                        {
                            var_47 += ((/* implicit */unsigned char) (-(((/* implicit */int) (short)16342))));
                            var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) max((((/* implicit */short) (signed char)-8)), ((short)3353))))));
                            var_49 ^= ((/* implicit */unsigned short) min(((-((-(18446744073709551615ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)126)), ((unsigned char)0))))));
                            var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1939965072U)))))));
                            var_51 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-124))));
                        }
                    }
                } 
            } 
            var_52 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)235), (((/* implicit */unsigned char) (signed char)81))))))))));
            var_53 ^= ((/* implicit */short) min((((/* implicit */long long int) max((max(((short)378), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (signed char)-115))))), (min(((~(1744373202103726507LL))), (max((((/* implicit */long long int) 1939965072U)), (-3194451318880565163LL)))))));
        }
    }
    var_54 ^= ((/* implicit */_Bool) (-(min(((+(((/* implicit */int) (unsigned char)229)))), ((-(((/* implicit */int) (short)378))))))));
}
