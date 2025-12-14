/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76616
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
    var_20 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_21 *= ((/* implicit */_Bool) arr_6 [i_2] [i_1 - 1]);
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_5 [i_2] [i_2] [i_2] [i_1 - 3])), (var_14))))));
                    arr_8 [i_0] = ((/* implicit */short) ((((((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) var_14)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_19) : (((/* implicit */unsigned long long int) -1322929435)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_22 = ((/* implicit */int) (~(2730967340402502716LL)));
        /* LoopSeq 3 */
        for (signed char i_4 = 2; i_4 < 20; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) ((var_19) << (((((/* implicit */int) (unsigned short)62066)) - (62017)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_14))) / (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))))))))));
                arr_17 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) (~(((/* implicit */int) (short)8192))))) <= (((((/* implicit */_Bool) var_0)) ? (2168686670U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))) ? (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_4 - 1] [i_5]))))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)27)))))) : (((((/* implicit */_Bool) arr_15 [i_4 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 20; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned int) arr_10 [i_4])))));
                            var_25 = ((short) ((var_5) + (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4 - 1] [i_4 - 1])))));
                            var_26 = ((/* implicit */int) var_6);
                        }
                    } 
                } 
            }
            for (int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                arr_27 [i_4 + 1] [i_8] = ((((/* implicit */int) min((var_1), (((/* implicit */short) arr_18 [i_4 + 1] [i_4 + 1]))))) != (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)84))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_4 - 2] [i_3]))))) : (((/* implicit */int) var_1)))));
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (_Bool)1))));
                arr_28 [i_3] [i_3] [i_4] = ((/* implicit */_Bool) ((arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1]) ? (((/* implicit */int) (!(arr_16 [i_3] [i_4] [i_3])))) : (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)3469)))) && (((/* implicit */_Bool) ((signed char) (signed char)-86))))))));
                arr_29 [i_3] [i_3] [i_4] [i_8] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8] [i_4 - 2]))) : (0U)))) ? (arr_9 [i_4 - 1]) : ((-(((/* implicit */int) var_8)))))), (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)0))))));
            }
            for (short i_9 = 1; i_9 < 18; i_9 += 3) 
            {
                var_28 = ((/* implicit */short) max((((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (unsigned char)121)) ? (arr_11 [i_9] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))), (((unsigned char) (~(((/* implicit */int) arr_23 [i_9] [i_4 - 2] [i_3])))))));
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    for (unsigned short i_11 = 2; i_11 < 19; i_11 += 1) 
                    {
                        {
                            var_29 += ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_18)) ? (var_9) : (16303555392338179937ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216)))));
                            arr_38 [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)90), (var_18)))))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((signed char) (signed char)-62))))));
                /* LoopSeq 4 */
                for (signed char i_12 = 1; i_12 < 18; i_12 += 2) 
                {
                    var_31 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_13 [i_12 - 1] [i_4] [i_4 - 2])) ^ (((/* implicit */int) arr_35 [i_12] [i_12] [i_12] [i_12 + 1] [i_12] [i_12 + 3] [i_12 + 2]))))));
                    arr_41 [i_3] [i_3] [i_9 + 1] [i_12] = ((/* implicit */signed char) (~(17144424719187526032ULL)));
                }
                for (unsigned char i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    var_32 &= ((/* implicit */signed char) ((((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_35 [i_3] [i_4] [i_3] [i_3] [i_3] [i_3] [i_4 - 2])) : (((/* implicit */int) ((-758722619) > (((/* implicit */int) (_Bool)0))))))) : (((((/* implicit */_Bool) arr_12 [i_4 + 1])) ? (((/* implicit */int) (signed char)68)) : (-1853184471)))));
                    var_33 = ((/* implicit */signed char) var_4);
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) > (((((/* implicit */_Bool) 16303555392338179937ULL)) ? (2168686670U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_9 + 3] [i_4 + 1] [i_4 + 1] [i_4 + 1])) || (((/* implicit */_Bool) var_19))))) : ((+(((/* implicit */int) (short)32759)))))))));
                    var_35 = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8044))) : (2126280626U)))) ? (((/* implicit */int) arr_14 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_9 - 1])) : (((/* implicit */int) (signed char)72))));
                }
                for (signed char i_14 = 3; i_14 < 17; i_14 += 3) 
                {
                    arr_48 [i_3] [i_14] [i_3] [i_14 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) (signed char)-72))))) ? (((((/* implicit */int) arr_47 [i_4 - 2] [i_4 - 1])) + (((/* implicit */int) arr_47 [i_4 - 2] [i_4 - 1])))) : (((/* implicit */int) (signed char)-73))));
                    var_36 = ((/* implicit */int) var_13);
                    var_37 = ((/* implicit */short) min(((!(((/* implicit */_Bool) arr_12 [i_4 - 2])))), ((!(((/* implicit */_Bool) arr_25 [i_4 + 1] [i_9 - 1] [i_14 + 4]))))));
                }
                for (long long int i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    var_38 = ((/* implicit */_Bool) arr_47 [i_3] [i_3]);
                    arr_51 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((_Bool) var_16)) || (((2168686670U) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3]))))))))));
                    arr_52 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 2168686670U)) + ((((_Bool)0) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)59)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_14))) / ((-(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) arr_47 [i_3] [i_3]))))) / (((var_17) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3)))))));
                }
                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((var_17) ? (((/* implicit */long long int) 2168686670U)) : (var_11)))))) ? (min(((+(((/* implicit */int) var_8)))), (-1171030337))) : (((1507524703) / (((/* implicit */int) arr_15 [i_4 - 2]))))));
            }
            var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((signed char) -4712767770551215324LL)))) ? (((/* implicit */int) arr_36 [i_3] [i_3] [i_3] [i_3] [(_Bool)0])) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_3])), (arr_25 [i_3] [i_3] [i_3])))))))));
            var_41 *= ((/* implicit */long long int) ((unsigned short) (_Bool)1));
        }
        /* vectorizable */
        for (unsigned short i_16 = 0; i_16 < 21; i_16 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 1) 
            {
                var_42 -= ((/* implicit */signed char) ((((/* implicit */int) var_16)) - (((/* implicit */int) arr_24 [i_3] [i_16] [i_16] [i_16]))));
                var_43 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) arr_50 [i_17] [i_17] [i_3] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_23 [i_3] [i_16] [i_3])))) : (((/* implicit */int) ((unsigned short) (signed char)86)))));
            }
            for (short i_18 = 2; i_18 < 20; i_18 += 3) 
            {
                arr_62 [i_16] = arr_59 [i_16] [i_18 - 1];
                arr_63 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */signed char) var_13);
            }
            var_44 = ((/* implicit */unsigned short) (~(((arr_32 [i_3] [i_3] [i_16] [i_16] [i_3] [i_16]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-11947)))))));
            var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) arr_20 [i_3] [i_3] [i_16] [i_16] [i_3]))));
            var_46 = ((/* implicit */unsigned short) 4095389456U);
        }
        for (unsigned short i_19 = 0; i_19 < 21; i_19 += 1) /* same iter space */
        {
            var_47 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (2168686669U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_19] [i_19])))))))));
            arr_68 [i_19] = ((/* implicit */unsigned long long int) (unsigned char)143);
            var_48 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_50 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_42 [i_3] [i_3] [i_3] [i_19])))) - ((+(((/* implicit */int) var_2)))))), ((((((~(((/* implicit */int) (short)23609)))) + (2147483647))) << (((((arr_30 [i_3] [i_19] [i_3] [i_3]) + (722592815))) - (15)))))));
            var_49 = ((/* implicit */signed char) (~(((((_Bool) var_6)) ? (((/* implicit */int) max((((/* implicit */signed char) var_12)), ((signed char)71)))) : ((((_Bool)1) ? (((/* implicit */int) (short)-21084)) : (((/* implicit */int) arr_21 [i_3] [i_19] [i_19]))))))));
        }
        var_50 = ((/* implicit */_Bool) (-(min((var_11), (((/* implicit */long long int) ((unsigned char) (short)(-32767 - 1))))))));
        arr_69 [i_3] [i_3] = ((/* implicit */_Bool) var_18);
    }
    var_51 = ((/* implicit */signed char) var_0);
}
