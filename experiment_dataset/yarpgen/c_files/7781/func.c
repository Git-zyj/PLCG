/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7781
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
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0 + 1] [i_0] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)5] [i_0] [i_2] [i_3]))) <= (((((/* implicit */_Bool) (unsigned char)8)) ? (1392205544704126022LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))))));
                            var_15 = ((/* implicit */short) ((((/* implicit */int) max(((unsigned char)207), ((unsigned char)1)))) >= (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) == (((/* implicit */int) (short)32678)))))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */unsigned char) (((((+(var_8))) >= (((/* implicit */long long int) ((/* implicit */int) max(((short)26747), (((/* implicit */short) (unsigned char)92)))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) (unsigned char)251)), (arr_9 [i_1] [i_0])))))))));
                var_16 = ((/* implicit */unsigned char) (short)(-32767 - 1));
                arr_12 [i_1] [i_0 + 1] [i_0 + 1] |= arr_4 [i_1];
                arr_13 [i_0] [i_0] [i_1] = -1498770307;
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (unsigned char i_4 = 2; i_4 < 11; i_4 += 2) 
    {
        for (short i_5 = 1; i_5 < 11; i_5 += 4) 
        {
            for (int i_6 = 3; i_6 < 10; i_6 += 4) 
            {
                {
                    var_18 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (short)-21)) | (((/* implicit */int) (signed char)-72)))) : (((((/* implicit */int) (signed char)65)) | (((/* implicit */int) (unsigned char)20)))))) == (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_16 [i_5 - 1])), (var_8)))) || (((/* implicit */_Bool) (-(arr_18 [i_4 + 1])))))))));
                    var_19 = ((/* implicit */signed char) (-(18446744073709551615ULL)));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((-267988945) == (((/* implicit */int) (unsigned char)18)))))) & (((((/* implicit */_Bool) (unsigned char)112)) ? (11075796216471161888ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 7370947857238389727ULL))))) % (((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (0ULL)))))))))));
                    arr_24 [i_5] [i_5 + 1] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1070269957)) ? (((/* implicit */int) (signed char)7)) : (((((/* implicit */int) (unsigned char)13)) & (((/* implicit */int) (unsigned char)177))))))), (7370947857238389727ULL)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)96)) & (((/* implicit */int) (short)-16396))));
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7])) ? ((~(((/* implicit */int) (unsigned char)6)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)120))))))) ? ((((!(((/* implicit */_Bool) arr_25 [i_7] [i_7])))) ? (var_8) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_13), ((unsigned char)223)))) ? (((((/* implicit */int) arr_25 [i_7] [i_7])) & (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-26))) <= (-1LL)))))))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? ((+(((((/* implicit */_Bool) 431706560)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_7]))) : (2199023255551LL))))) : (2199023255551LL)));
        arr_28 [i_7] = ((/* implicit */short) ((((((/* implicit */_Bool) 1130054190)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4)) ? (arr_26 [i_7]) : (2147483633)))))) ? (((33488896LL) % (((/* implicit */long long int) 2147483633)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32749))))) || (((/* implicit */_Bool) (~(-2147483634))))))))));
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            arr_32 [i_7] = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)32742)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (unsigned char)250)))))) | ((~(((/* implicit */int) var_13))))));
            arr_33 [i_7] [i_8] [i_8] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)16395))) * (-33488905LL)))) ? (((((/* implicit */_Bool) (signed char)58)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_30 [i_8] [i_8])) >= (16062428613625150216ULL)))))))));
        }
    }
}
