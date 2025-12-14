/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77492
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
    var_10 ^= ((/* implicit */_Bool) var_4);
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) (unsigned short)50559)) && (((/* implicit */_Bool) (unsigned char)255)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)14975)) : (var_0))) : (((/* implicit */int) var_9)))))))));
        var_12 = min((((((/* implicit */_Bool) (unsigned short)50537)) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) arr_0 [(short)7])) & (((/* implicit */int) var_9)))))), (((/* implicit */int) ((_Bool) 4294967285U))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_13 += ((/* implicit */short) (+(((int) var_9))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_14 = ((/* implicit */short) ((var_0) == (2097151)));
            var_15 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50559))) >= (7759213334401011287ULL)));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                arr_12 [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) arr_11 [i_3] [i_2] [i_1])), (4294967285U))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((((/* implicit */int) arr_6 [i_2])) == (((/* implicit */int) arr_6 [i_2])))), ((_Bool)1))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        {
                            var_17 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) 10687530739308540355ULL))));
                            var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))) ^ (((2542841545U) << (((((/* implicit */int) (unsigned short)14999)) - (14984)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((((/* implicit */int) (short)-8013)) | (((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -21)))) : (((unsigned int) (unsigned short)7)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                            var_20 ^= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_7] [i_2] [i_6] [i_7])) : (((/* implicit */int) var_1)))));
                        }
                    } 
                } 
            }
            var_21 ^= var_5;
            var_22 |= ((/* implicit */signed char) -120873076);
        }
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)108)))))));
    }
    for (int i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((~(((((/* implicit */int) var_9)) | (var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) (signed char)3))))))))));
                    var_25 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((short) (unsigned short)21))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (14U)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)32754)) || (((/* implicit */_Bool) -120873103)))))))));
                    var_26 = ((((/* implicit */_Bool) arr_31 [i_8])) ? (((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */int) arr_31 [i_10])) : (((/* implicit */int) (signed char)118)))) : (max((((/* implicit */int) arr_31 [i_9])), (var_8))));
                }
            } 
        } 
        var_27 = (+((+(((((/* implicit */_Bool) 7759213334401011295ULL)) ? (var_8) : (((/* implicit */int) var_6)))))));
    }
    var_28 = ((/* implicit */_Bool) min((var_2), (((/* implicit */int) ((signed char) ((short) var_5))))));
    var_29 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10687530739308540317ULL)) ? (var_4) : (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)44610))) : (((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (unsigned short)55939))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (((+(var_7))) == (((/* implicit */int) (signed char)8)))))));
}
