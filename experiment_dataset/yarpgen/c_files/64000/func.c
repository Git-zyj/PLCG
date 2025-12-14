/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64000
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
    var_14 = ((/* implicit */int) ((var_12) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) var_5))))))))));
    var_15 &= ((/* implicit */int) var_6);
    var_16 = ((/* implicit */int) (signed char)(-127 - 1));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_11))))), ((+(13898659841955902930ULL))))) ^ (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) var_4))))))));
        arr_3 [23U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) ((signed char) 15109924752597310691ULL)))))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) % (((/* implicit */int) (short)28010)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4548084231753648685ULL))))) == (((/* implicit */int) (unsigned short)64446))));
                    arr_10 [i_0] [(short)6] [i_2] = ((/* implicit */unsigned short) 13898659841955902930ULL);
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) -7432779176203774155LL));
    }
    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
    {
        arr_14 [(unsigned char)21] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_8 [i_3] [i_3] [i_3])))) <= (((((/* implicit */int) (unsigned short)58443)) >> (((((/* implicit */int) var_3)) + (0)))))));
        arr_15 [i_3] [i_3] = ((((/* implicit */long long int) min((21), (((/* implicit */int) var_13))))) + (var_2));
    }
    for (signed char i_4 = 2; i_4 < 12; i_4 += 3) 
    {
        arr_18 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_4] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) : (17538201453784600205ULL)));
        var_18 -= ((/* implicit */unsigned short) ((((/* implicit */int) (short)32256)) & (((/* implicit */int) (signed char)-121))));
        /* LoopSeq 3 */
        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            arr_23 [i_4] [i_4] = ((/* implicit */unsigned long long int) 5208431618626690445LL);
            arr_24 [i_4] = -1;
            arr_25 [i_4] [i_5] [i_5 - 1] = ((/* implicit */int) (-(4548084231753648692ULL)));
        }
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
        {
            var_19 += ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-27086))) * (min((602533096U), (((/* implicit */unsigned int) 0)))))));
            arr_30 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) var_5);
            var_20 = ((/* implicit */unsigned long long int) 1492503332U);
            arr_31 [i_4 + 1] [i_6] [i_6] |= ((/* implicit */int) (-(-7432779176203774166LL)));
            var_21 -= max((((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) (unsigned short)15360)))), ((~(((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (signed char)-95)))))));
        }
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
        {
            arr_34 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)16385)) : (((/* implicit */int) var_0)))) : (var_7)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) (unsigned char)7)))))))) : (((((/* implicit */_Bool) 2802463964U)) ? (((/* implicit */unsigned int) min((625907353), (-2010402611)))) : (((unsigned int) (unsigned char)0))))));
            arr_35 [i_4] [i_4] [i_4] = ((int) var_0);
            var_22 += ((/* implicit */unsigned int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) 0U)))))))));
            arr_36 [i_4] [i_7] [i_7] = ((/* implicit */short) var_3);
            arr_37 [i_4] = ((/* implicit */unsigned long long int) -1599040520);
        }
        var_23 = ((/* implicit */unsigned short) (+(-394640407078955528LL)));
        arr_38 [8] |= ((/* implicit */long long int) var_4);
    }
}
